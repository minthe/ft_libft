/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vfuhlenb <vfuhlenb@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/10 14:02:32 by vfuhlenb          #+#    #+#             */
/*   Updated: 2021/08/21 00:08:05 by vfuhlenb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* checks for an alphanumeric character;
it is equivalent to (isalpha(c) || isdigit(c)).
*/

int	ft_isalnum(int c)
{
	if ((c > 64 && c < 91) || (c > 96 && c < 123) || (c > 47 && c < 58))
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
	temp = ft_isalnum(77);
	printf("%d \n", temp);
	return (0);
}
*/
