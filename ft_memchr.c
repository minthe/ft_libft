/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vfuhlenb <vfuhlenb@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/21 01:22:09 by vfuhlenb          #+#    #+#             */
/*   Updated: 2021/08/21 20:33:22 by vfuhlenb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* The memchr() function locates the first occurrence of c
(converted to an unsigned char) in string s.
The memchr() function returns a pointer to the byte located,
or NULL if no such byte exists within n bytes. */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	while (n--)
	{
		if ((*(unsigned char *)s) == (unsigned char)c)
			return ((void *)s);
		s++;
	}
	return (NULL);
}
