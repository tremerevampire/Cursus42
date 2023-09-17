/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acastejo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/13 15:17:55 by acastejo          #+#    #+#             */
/*   Updated: 2023/09/15 13:58:10 by acastejo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <string.h>

void	ft_bzero(void *s, size_t n)
{
	ft_memset(s, 0, n);
}


int main ()
{
	char b[50];
	strcpy(b, "Hola");
	ft_bzero(b, 2);
	printf("%s\n", b);
	printf("%s\n", bzero(b, 2));
}
