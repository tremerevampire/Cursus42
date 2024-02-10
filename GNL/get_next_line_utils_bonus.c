/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils_bonus.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acastejo <acastejo@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/18 14:47:27 by acastejo          #+#    #+#             */
/*   Updated: 2024/02/10 13:00:11 by acastejo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line_bonus.h"

int	listlen(t_list *list)
{
	int		i;
	int		j;

	if (list == NULL)
		return (0);
	i = 0;
	while (list)
	{
		j = 0;
		while (list->content[j] != '\0')
		{
			if (list->content[j] == '\n')
			{
				return (++i);
			}
			i++;
			j++;
		}
		list = list->next;
	}
	return (i);
}

int	are_nline(t_list *list)
{
	int	i;

	if (list == NULL)
		return (0);
	while (list)
	{
		i = 0;
		while (list->content[i] != '\0')
		{
			if (list->content[i] == '\n')
				return (1);
			++i;
		}
		list = list->next;
	}
	return (0);
}

void	clear_list(t_list **list)
{
	t_list	*last;
	t_list	*clean;
	int		i;
	int		j;
	char	*buffer;

	buffer = malloc(BUFFER_SIZE + 1);
	if (!buffer)
		return (free_all(list, NULL, NULL));
	clean = malloc(sizeof(t_list));
	if (!clean)
		return (free_all(list, NULL, buffer));
	last = last_node(*list);
	i = 0;
	j = 0;
	while (last->content[i] != '\n' && last->content[i])
		++i;
	while (last->content[i] != '\0' && last->content[++i])
		buffer[j++] = last->content[i];
	buffer[j] = '\0';
	clean->content = buffer;
	clean->next = NULL;
	free_all(list, clean, buffer);
}

void	free_all(t_list **list, t_list *clean, char *buff)
{
	t_list	*aux;

	if (!*list)
		return ;
	while (*list)
	{
		aux = (*list)->next;
		free((*list)->content);
		free(*list);
		*list = aux;
	}
	aux = *list;
	if (clean && clean->content[0])
		*list = clean;
	else
	{
		free(clean);
		free(buff);
	}
}
