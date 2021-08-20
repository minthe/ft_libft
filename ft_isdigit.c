/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vfuhlenb <vfuhlenb@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/09 19:46:45 by vfuhlenb          #+#    #+#             */
/*   Updated: 2021/08/21 00:07:49 by vfuhlenb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isdigit(int c)
{
	if (c >= 48 && c <= 57)
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
	temp = ft_isdigit(-7278);
	printf("0: %d \n", temp);
	temp = ft_isdigit(1968);
	printf("3: %d \n", temp);
	temp = ft_isdigit(9);
	printf("9: %d \n", temp);
	return (0);
}
*/
