/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acastejo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/13 15:49:01 by acastejo          #+#    #+#             */
/*   Updated: 2023/09/15 16:26:50 by acastejo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>
#include  "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	char	*dest;
	char	*srce;

	dest = (char *) dst;
	srce = (char *) src;
	while (n--)
	{
		dest[n] = srce[n];
	}
	return (dst);
}

int main()
{
	char d[50] = "AABBCCDDEEFF";
	char d1[50] = "AABBCCDDEEFF";

	memcpy(d1 + 6, d1, 20);
	printf("Esto es lo que tengo en destino antes de ejecutar: %s\n", dst);
	ft_memcpy(d + 6, d, 20);
	printf("Esto es lo que tengo en destino despues de ejecutar: %s\n", dst);
}
