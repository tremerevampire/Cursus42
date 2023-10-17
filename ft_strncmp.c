/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acastejo <acastejo@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/19 16:59:04 by acastejo          #+#    #+#             */
/*   Updated: 2023/10/15 17:29:27 by acastejo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libc.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	char unsigned	*str1;
	char unsigned	*str2;
	size_t			i;
	size_t			dif;

	i = 0;
	str1 = (unsigned char *) s1;
	str2 = (unsigned char *) s2;
	if (n == 0)
		return (0);
	while (str1[i] == str2[i] && str1[i] != '\0' && str2 != '\0' && i < n)
	{
		i++;
	}
	if (i == n)
		i--;
	dif = str1[i] - str2[i];
	return (dif);
}
