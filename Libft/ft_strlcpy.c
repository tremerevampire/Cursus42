/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strlcpy.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acastejo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/15 16:29:34 by acastejo          #+#    #+#             */
/*   Updated: 2023/09/16 16:00:02 by acastejo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <string.h>

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	char	*s;
	int		i;

	i = 0;
	s = (char *)src;
	while (i < dstsize - 1)
	{
		dst[i] = s[i];
		i++;
	}
	dst[i] = '\0';
	return ((size_t) dst);
}
/*
int main()
{
	char	a[50] = "hola, que ashe";
	char	b[50] = "Adios.";
	char	a1[50] = "hola, que ashe";
	char	b1[50] = "Adios.";

	strlcpy(b, a, 4);
	printf("La función original me da: %s\n", b);
	ft_strlcpy(b1, a1, 4);
	printf("La función que yo mando devuelve: %s\n", b1);
}*/
