/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vfuhlenb <vfuhlenb@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/21 17:11:10 by vfuhlenb          #+#    #+#             */
/*   Updated: 2021/08/21 18:02:19 by vfuhlenb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* The strnstr() function locates the first occurrence of the null-terminated string needle in the string
haystack, where not more than len characters are searched.  Characters that appear after a `\0' character are
not searched.  Since the strnstr() function is a FreeBSD specific API, it should only be used when portability
is not a concern. 
If needle is an empty string, haystack is returned; if needle occurs nowhere in haystack, NULL is returned;
otherwise a pointer to the first character of the first occurrence of needle is returned.*/

char *ft_strnstr(const char *haystack, const char *needle, size_t len)

{
	size_t	nlen;

	nlen = ft_strlen(needle);
	if (!nlen)
		return ((char *)haystack);
	while (len)
	{
		if (ft_strncmp(haystack, needle, nlen) == 0)
			return ((char *)haystack);
		if (len <= nlen)
			break ;
		len--;
		haystack++;
	}
	return (NULL);
}
