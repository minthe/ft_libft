/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vfuhlenb <vfuhlenb@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/21 18:22:19 by vfuhlenb          #+#    #+#             */
/*   Updated: 2021/08/21 19:46:43 by vfuhlenb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
The strlcpy() and strlcat() functions copy and concatenate strings with the same input parame-
ters and output result as snprintf(3).
strlcpy() and strlcat() take the full size of the destination buffer and guarantee NUL-termina-
tion if there is room.  Note that room for the NUL should be included in dstsize.

strlcpy() copies up to dstsize - 1 characters from the string src to dst, NUL-terminating the
result if dstsize is not 0.
If the src and dst strings overlap, the behavior is undefined.

Like snprintf(3), the strlcpy() and strlcat() functions return the total length of the string
they tried to create.  For strlcpy() that means the length of src.  For strlcat() that means the
initial length of dst plus the length of src.

If the return value is >= dstsize, the output string has been truncated.  It is the caller's
responsibility to handle this. */

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	buf_len;
	size_t	src_len;

	// if (!dst && !src)
	// 	return (0);
	src_len = ft_strlen(src);
	if (dstsize)
	{
		if (src_len >= dstsize)
			buf_len = dstsize - 1;
		else
			buf_len = src_len;
		ft_memcpy(dst, src, buf_len);
		dst[buf_len] = '\0';
	}
	return (src_len);
}
// 	size_t i;

// 	i = 0;
// 	if (!dst && !src)
// 		return (0);
// 	while (i < (dstsize - 1) && src[i])
// 	{
// 		dst[i] = src[i];
// 		i++;
// 	}
// 	dst[i] = '\0';
// 	while (src[i])
// 		i++;
// 	return (ft_strlen(src));
// }