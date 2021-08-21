/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vfuhlenb <vfuhlenb@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/21 12:46:14 by vfuhlenb          #+#    #+#             */
/*   Updated: 2021/08/21 13:14:01 by vfuhlenb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* The strchr() function locates the first occurrence of c (converted to a char)
in the string pointed to by s.
The terminating null character is considered to be part of the string;
therefore if c is `\0', the functions locate the terminating `\0'.
The functions strchr() and strrchr() return a pointer to the located character,
or NULL if the character does not appear in the string. */

char	*ft_strchr(const char *s, int c)
{
	while (*s != '\0')
	{
		if (*s == c)
			return ((char *)s);
		s++;
	}
	if (c == 0)
		return ((char *)s);
	return (NULL);
}
