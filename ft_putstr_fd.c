/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vfuhlenb <vfuhlenb@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/11 12:23:10 by vfuhlenb          #+#    #+#             */
/*   Updated: 2021/08/21 00:10:06 by vfuhlenb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* Outputs the string ’s’ to the given file descriptor.
*/

void	ft_putstr_fd(char *s, int fd)
{
	int	counter;

	counter = 0;
	while (s[counter])
	{
		ft_putchar_fd(s[counter], fd);
		counter++;
	}
}

/*
int	main(void)
{
	ft_putstr_fd("hello", 1); // DELETE MAIN
	return(0);
}
*/