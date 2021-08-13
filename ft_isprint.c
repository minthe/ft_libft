/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vfuhlenb <vfuhlenb@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/10 17:13:00 by vfuhlenb          #+#    #+#             */
/*   Updated: 2021/08/11 23:28:27 by vfuhlenb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* checks for any printable character including space. */

int	ft_isprint(int c)
{
	if (c >= 32 && c <= 126)
		return (1);
	else
		return (0);
}

#include <stdio.h>

/*
int	main(void)
{
	int	temp; // DELETE MAIN
	temp = 55;
	printf("%d \n", temp);
	temp = ft_isprint(-7278);
	printf("out: %d \n", temp);
	temp = ft_isprint(125);
	printf("125: %d \n", temp);
	temp = ft_isprint(0);
	printf("0: %d \n", temp);
	return (0);
}
*/