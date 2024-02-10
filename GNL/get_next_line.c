/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acastejo <acastejo@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/18 14:47:33 by acastejo          #+#    #+#             */
/*   Updated: 2024/02/09 13:20:17 by acastejo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

int	new_list(t_list **list, int fd)
{
	int		read_bytes;
	char	*buff;

	while (!are_nline(*list))
	{
		buff = malloc(BUFFER_SIZE + 1);
		if (!buff)
			return (0);
		read_bytes = read(fd, buff, BUFFER_SIZE);
		if (read_bytes == -1)
			return (free(buff), 0);
		if (!read_bytes)
			return (free(buff), 1);
		buff[read_bytes] = '\0';
		lstadd_back(list, buff);
		if (!list)
			return (free(buff), 0);
	}
	return (1);
}

void	lstadd_back(t_list **list, char *buff)
{
	t_list	*new;
	t_list	*last;

	last = last_node(*list);
	new = malloc(sizeof(t_list));
	if (!new)
	{
		free(buff);
		return ;
	}
	new->content = buff;
	new->next = NULL;
	if (!last)
		*list = new;
	else
		last->next = new;
}

t_list	*last_node(t_list *list)
{
	if (!list)
		return (NULL);
	while (list->next != NULL)
		list = list->next;
	return (list);
}

void	list_clean(t_list *list, char *n_line)
{
	int		i;
	int		j;

	if (!list)
		return ;
	i = 0;
	while (list)
	{
		j = 0;
		while (list->content[j] != '\0')
		{
			if (list->content[j] == '\n')
			{
				n_line[i] = '\n';
				n_line[++i] = '\0';
				return ;
			}
			n_line[i++] = list->content[j++];
		}
		list = list->next;
	}
	n_line[i] = '\0';
}

char	*get_next_line(int fd)
{
	static t_list	*list;
	char			*n_line;
	int				str_len;

	if (fd < 0 || BUFFER_SIZE <= 0)
		return (NULL);
	if (!new_list(&list, fd))
	{
		free_all(&list, NULL, NULL);
		return (NULL);
	}
	if (!list)
		return (NULL);
	str_len = listlen(list);
	n_line = malloc (str_len + 1);
	if (!n_line)
	{
		free_all(&list, NULL, NULL);
		return (NULL);
	}
	list_clean(list, n_line);
	clear_list(&list);
	return (n_line);
}

// int		main(int argc, char **argv)
// {
// 	int		fd;
// 	char	*line;
// 	int		lines = 1;

// 	if (argc != 2)
// 		return (0);
// 	fd = open(argv[1], O_RDONLY);
// 	while ((line = get_next_line(fd)))
// 		printf ("%i->%s", lines++, line);
// 	close(fd);
// 	while ((line = get_next_line(fd)))
// 		printf ("%i->%s", lines++, line);	
// 	free(line);
// 	return (0);
// }