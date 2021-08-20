/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vfuhlenb <vfuhlenb@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/01 01:03:13 by vfuhlenb          #+#    #+#             */
/*   Updated: 2021/08/21 00:07:55 by vfuhlenb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* checks whether c is a 7-bit unsigned char value
that fits into the ASCII character set.
The values returned are nonzero if the character c falls into the tested class,
and a zero value if not.
*/

int	ft_isascii(int c)
{
	if (c >= 0 && c <= 127)
		return (1);
	else
		return (0);
}

/*
#include <stdio.h>

int	main(void)
{
	int temp; // DELETE MAIN
	temp = 55;
	printf("%d \n", temp);
	temp = ft_isascii(-7278);
	printf("out: %d \n", temp);
	temp = ft_isascii(255);
	printf("255: %d \n", temp);
	temp = ft_isascii(0);
	printf("0: %d \n", temp);
	return (0);
}
*/
