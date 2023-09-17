/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acastejo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/14 13:31:36 by acastejo          #+#    #+#             */
/*   Updated: 2023/09/16 15:08:08 by acastejo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>
#include <stdio.h>

void    *ft_memmove(void *dst, const void *src, size_t n)
{
    char    *dest;
    char    *srce;
    int i;

    i = 0;
    dest = (char *) dst;
    srce = (char *) src;
    if ((size_t *)dst >= (size_t *)src)
    {
    	while (n--)
    	{
      		dest[n] = srce[n];
    	}
    }
    else
    {
    	while (i++ < n)
    	{
      		dest[i] = srce[i];
    	}
    }
  return (dst);
}
/*
int main()
{
	char	a[50] = "AABBCCDDEEFF";
	char	b[50] = "AABBCCDDEEFF";
	char	c[50] = "AABBCCDDEEFF";
	char	d[50] = "";

	memcpy(d , a , 20);
	memmove(b+4 , b, 20);
	printf("Esto es lo que tengo con memmove: %s\n\n", b);
	ft_memmove(c+4 , c, 20);
	printf("Esto es lo que tengo con mi función: %s\n\n", c);
}
*/
