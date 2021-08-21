/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vfuhlenb <vfuhlenb@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/21 01:22:09 by vfuhlenb          #+#    #+#             */
/*   Updated: 2021/08/21 01:50:44 by vfuhlenb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* The memchr() function locates the first occurrence of c
(converted to an unsigned char) in string s.
The memchr() function returns a pointer to the byte located,
or NULL if no such byte exists within n bytes. */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*temp;
	size_t			i;

	temp = (unsigned char *)s;
}
