/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vfuhlenb <vfuhlenb@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/12 16:42:08 by vfuhlenb          #+#    #+#             */
/*   Updated: 2021/08/11 23:35:15 by vfuhlenb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/*
void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}

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
*/
void	ft_putnbr_fd(int n, int fd)
{
	int	temp;

	temp = n;
	if (n == -2147483648)
	{
		ft_putstr_fd("-2147483648", fd);
		return ;
	}
	if (temp < 0)
	{
		ft_putchar_fd('-', fd);
		temp *= -1;
	}
	if (temp < 10)
		ft_putchar_fd(temp + '0', fd);
	else
	{
		ft_putnbr_fd(temp / 10, fd);
		ft_putnbr_fd(temp % 10, fd);
	}
}

/*
int	main(void)
{
	ft_putnbr_fd(2147483647, 1); // DELETE MAIN
	return (0);
}
*/