/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vfuhlenb <vfuhlenb@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/11 08:01:09 by vfuhlenb          #+#    #+#             */
/*   Updated: 2021/08/11 23:25:12 by vfuhlenb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* toupper() converts the letter c to upper case, if possible.
If c is not an unsigned char value, or EOF, the behavior of these functions is undefined.
The value returned is that of the converted letter, or c if the conversion was not possible.
*/

int	ft_toupper(int c)
{
	if (c >= 97 && c <= 122)
	{
		c = c - 32;
		return (c);
	}
	else
		return (c);
}

/*
#include <stdio.h>
#include <ctype.h>

int	main(void)
{
	printf("Mine A: %d \n", ft_toupper('A')); // DELETE MAIN
	printf("Original A: %d \n", toupper('A'));
	printf("Mine h: %d \n", ft_toupper('h'));
	printf("Original h: %d \n", toupper('h'));
	printf("Mine *: %d \n", ft_toupper('*'));
	printf("Original *: %d \n", toupper('*'));
	return (0);
}
*/