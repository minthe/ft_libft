/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vfuhlenb <vfuhlenb@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/10 23:34:39 by vfuhlenb          #+#    #+#             */
/*   Updated: 2021/08/11 23:26:37 by vfuhlenb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* tolower() converts the letter c to lower case, if possible.
If c is not an unsigned char value, or EOF, the behavior of these functions is undefined.
The value returned is that of the converted letter, or c if the conversion was not possible.
*/

int	ft_tolower(int c)
{
	if (c >= 65 && c <= 90)
	{
		c = c + 32;
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
	printf("Mine A: %d \n", ft_tolower('A')); // DELETE MAIN
	printf("Original A: %d \n", tolower('A'));
	printf("Mine h: %d \n", ft_tolower('h'));
	printf("Original h: %d \n", tolower('h'));
	printf("Mine *: %d \n", ft_tolower('*'));
	printf("Original *: %d \n", tolower('*'));
	return (0);
}
*/