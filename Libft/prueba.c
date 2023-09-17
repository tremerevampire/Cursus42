/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   prueba.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acastejo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/14 13:52:30 by acastejo          #+#    #+#             */
/*   Updated: 2023/09/14 14:13:25 by acastejo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

int main()
{
	char dst[50] = "Prueba y ensayo largo";
	char src[50] = "abcdefghijklmnñopqr";

	printf("Esto es lo que tengo en destino antes de ejecutar: %s\n", dst);
	printf("Esto es lo que tengo en origen antes de ejecutar: %s\n", src);
	memmove(&dst[0], &src[2], 10);
	printf("Esto es lo que tengo en destino despues de ejecutar: %s\n", dst);
	printf("Esto es lo que tengo en origen despues de ejecutar: %s\n", src);
}

