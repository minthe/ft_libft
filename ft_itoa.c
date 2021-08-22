/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vfuhlenb <vfuhlenb@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/22 18:15:35 by vfuhlenb          #+#    #+#             */
/*   Updated: 2021/08/22 18:44:23 by vfuhlenb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_isneg(int n)
{
	if (n < 0)
		return (1);
	else
		return (-1);
}

static size_t	ft_ndigits(int n, int neg)
{
	size_t	nd;

	if (neg == 1)
		nd = 2;
	else
		nd = 1;
	while (n / 10)
	{
		n /= 10;
		nd++;
	}
	return (nd);
}

char	*ft_itoa(int n)
{
	char	*str;
	int		neg;

	neg = ft_isneg(n);
	n = n * neg;
	str = (char *)malloc(sizeof(char) * (ft_ndigits(n, neg) + 1));
	if (!str)
		return (NULL);
	if (neg == 1)
		*str++ = '-';
	while()
}
