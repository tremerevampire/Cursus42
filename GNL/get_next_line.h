/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acastejo <acastejo@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/18 14:47:30 by acastejo          #+#    #+#             */
/*   Updated: 2024/02/09 12:08:08 by acastejo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H

# define GET_NEXT_LINE_H

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 20

# endif

# include <stdio.h>
# include <unistd.h>
# include <stdlib.h>
# include <fcntl.h>
# include <string.h>

typedef struct s_list
{
	char			*content;
	struct s_list	*next;
}	t_list;

int		are_nline(t_list *list);
t_list	*last_node(t_list *list);
void	list_clean(t_list *list, char *n_line);
int		listlen(t_list *list);
void	clear_list(t_list **list);
char	*get_next_line(int fd);
void	lstadd_back(t_list **list, char *buff);
void	free_all(t_list **list, t_list *clean, char *buff);
int		new_list(t_list **list, int fd);
char	*ft_strdup(char *s1);

#endif
