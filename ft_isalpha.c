/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vfuhlenb <vfuhlenb@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/09 19:10:03 by vfuhlenb          #+#    #+#             */
/*   Updated: 2021/07/11 08:09:42 by vfuhlenb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalpha(int c)
{
	if ((c > 64 && c < 91) || (c > 96 && c < 123))
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
	temp = ft_isalpha(122);
	printf("%d \n", temp);
	return (0);
}
*/
