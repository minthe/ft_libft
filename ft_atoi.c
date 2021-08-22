/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vfuhlenb <vfuhlenb@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/22 09:20:50 by vfuhlenb          #+#    #+#             */
/*   Updated: 2021/08/22 13:07:17 by vfuhlenb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* The atoi() function converts the initial portion of the string pointed to by str to int representation.
It is equivalent to:
(int)strtol(str, (char **)NULL, 10);
While the atoi() function uses the current locale, the atoi_l() function may be passed a locale directly.
See xlocale(3) for more information. */

static int	ft_isspace(int c)
{
	if ((c > 8 && c < 14) || (c == ' '))
		return (1);
	else
		return (0);
}

int	ft_atoi(const char *str)
{
	int sign;
	int ret;

	ret = 0;
	sign = 1;
	while (ft_isspace(*str))
		str++;
	if (*str == '-' || *str == '+')
	{
		if (*str == '-')
			sign = sign * (-1);
		str++;
	}
	while (ft_isdigit(*str))
	{
		ret = (ret * 10) + (*str - '0');
		str++;
	}
	return (ret * sign);
}
