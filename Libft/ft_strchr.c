/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acastejo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/16 15:09:21 by acastejo          #+#    #+#             */
/*   Updated: 2023/09/16 17:12:44 by acastejo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>
#include <stdio.h>

char	*ft_strchr(const char *s, int c)
{
	char	*str;
	size_t	i;
	size_t	pos;
	size_t	len;

	str = (char *)s;
	i = 0;
	len = strlen(str);
	while (str[i] != '\0')
	{
		if (str[i] == c)
		{
			pos = len - i;
			strlcpy(str, &str[i], pos - 1);
		}
		i++;
	}
	return((char *)s);
}

int	main()
{
	int			c = 'c';
	const char	*s = "Hola, la letra de control es la c";
	char		*a = ft_strchr(s, c);
	printf("El resultado es: %s, return value: %s\n", s, a);
}
