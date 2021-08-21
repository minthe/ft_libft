/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vfuhlenb <vfuhlenb@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/21 17:11:10 by vfuhlenb          #+#    #+#             */
/*   Updated: 2021/08/21 20:34:26 by vfuhlenb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
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
