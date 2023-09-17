/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acastejo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/13 13:21:33 by acastejo          #+#    #+#             */
/*   Updated: 2023/09/15 14:00:37 by acastejo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

void	*ft_memset(void *b, int c, size_t len)
{
	char	*str;

	str = (char *)b;
	while (len--)
	{
		str[len] = (unsigned char)c;
	}
	return (b);
}
/*
int	main()
{
	char b[50];
	strcpy(b, "Hola, Fran");
	printf("Esto es el txto original %s\n", b);
	printf("Esto es lo que hace mi función %s\n\n", ft_memset(b, '$', 4));
	printf("Esto es lo que la función original hace %s", memset(b, '$', 4));
}*/
