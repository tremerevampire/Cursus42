/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acastejo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/12 19:29:58 by acastejo          #+#    #+#             */
/*   Updated: 2023/09/15 16:29:20 by acastejo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

int	ft_atoi(const char *str)
{
	int	i;
	int	num;
	int	sign;

	i = 0;
	num = 0;
	sign = 1;
	if  (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			sign = -1;
		i++;
	}	
	while (str[i] >= '0' && str[i] <= '9')
	{
		num = num * 10;
		num = num + str[i] - '0';
		i++;
	}
	return (num * sign);
}
/*
int main ()
{
	char str[] = "a12544asd656";

	printf("Numero que meto es: %s\n", str );
	printf("El numero resultado de atoi es: %i\n", ft_atoi(str));
	printf("El numero del original es: %i\n", atoi(str));
}*/
