/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vfuhlenb <vfuhlenb@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/21 13:34:46 by vfuhlenb          #+#    #+#             */
/*   Updated: 2021/08/21 14:34:26 by vfuhlenb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* The strcmp() and strncmp() functions lexicographically compare
the null-terminated strings s1 and s2.
The strncmp() function compares not more than n characters.
Because strncmp() is designed for comparing strings rather than binary data,
characters that appear after a `\0' character are not compared.

The strcmp() and strncmp() functions return an integer greater than, equal to,
or less than 0, according as the string s1 is greater than, equal to, or less than the string s2.
The comparison is done using unsigned characters, so that `\200' is greater than `\0'.
int	strncmp(const char *s1, const char *s2, size_t n) */

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	unsigned char	*us1;
	unsigned char	*us2;

	us1 = (unsigned char *)s1;
	us2 = (unsigned char *)s2;
	while (--n)
	{
		if (*us1 != *us2)
			return (*us1 - *us2);
		if (!*us1 || !*us2)
			break ;
		us1++;
		us2++;
	}
	return (*us1 - *us2);
}
