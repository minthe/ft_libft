/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vfuhlenb <vfuhlenb@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/09 20:24:52 by vfuhlenb          #+#    #+#             */
/*   Updated: 2021/07/11 08:08:49 by vfuhlenb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* The strlen() function calculates the length of the string s,
excluding the terminating null byte. */

size_t	ft_strlen(const char *s)
{
	size_t	counter;

	counter = 0;
	while (s[counter])
	{
		counter ++;
	}
	return (counter);
}

/*
int	main(void)
{
	printf("test \n"); // DELETE MAIN
//	printf("original: %zu \n", strlen(0));
	printf("test2 \n");
	printf("mine: %zu", ft_strlen(0));
	return(0);
}
*/
