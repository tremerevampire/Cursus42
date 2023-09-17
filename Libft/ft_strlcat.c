/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acastejo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/16 13:28:22 by acastejo          #+#    #+#             */
/*   Updated: 2023/09/16 13:48:35 by acastejo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <string.h>

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	int		i;
	char	*s;

	s = (char *)src;
	i = ft_strlen(dst);
	while (i++ < dstsize)
	{
		dst[i] = s[i];
	}
	return((size_t) dst);
}


int main()
{
	char d[50] = "Hola, que tal?";
	char s[50] = "Adios.";
	char d1[50] = "Hola, que tal?";
	char s1[50] = "Adios.";

	printf("La longitud de d es: %lu\n", strlen(d));
	strlcat(d, s, 14);
	printf("Esto es lo que la función original hace: %s\n", d);
	ft_strlcat(d1, s1, 14);
	printf("Esto es lo que hace mi función: %s\n", d);
}
