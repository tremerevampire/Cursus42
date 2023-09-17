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

char	*ft_strchr(const char *s, int c)
{
	char	*str;

	str = (char *)s;
	while (*str != c)
	{
		if (*str == '\0')
		{
			return (0);
		}
		str++;
	}
	return (str);
}
/*
int	main()
{
	int			c = 'c';
	const char	*s = "Hola, la letra de control es la c";
	char		*a = ft_strchr(s, c);
	char		*b = strchr(s, c);
	printf("La frase es: %s\nEl resultado es: %s\n", s, a);
	printf("El resultado esperado es: %s\n", b);
}
*/