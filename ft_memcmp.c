/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vfuhlenb <vfuhlenb@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/21 11:50:28 by vfuhlenb          #+#    #+#             */
/*   Updated: 2021/08/21 12:07:08 by vfuhlenb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* The memcmp() function compares byte string s1 against byte string s2.
Both strings are assumed to be n bytes long.
The memcmp() function returns zero if the two strings are identical, otherwise
returns the difference between the first two differing bytes (treated as unsigned
char values, so that `\200' is greater than `\0', for example).  Zero-length string
are always identical.  This behavior is not required by C and portable code should
only depend on the sign of the returned value. */

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	while (n--)
	{
		if ((*(unsigned char *)s1) != (*(unsigned char *)s2))
			return ((*(unsigned char *)s1) - (*(unsigned char *)s2));
		s1++;
		s2++;
	}
	return (0);
}
