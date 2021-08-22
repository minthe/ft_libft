/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vfuhlenb <vfuhlenb@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/22 09:16:21 by vfuhlenb          #+#    #+#             */
/*   Updated: 2021/08/22 09:19:31 by vfuhlenb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* strlcat() appends string src to the end of dst. It will append at most dstsize -
strlen(dst) - 1 characters.  It will then NUL-terminate, unless dstsize is 0 or the
original dst string was longer than dstsize (in practice this should not happen as
it means that either dstsize is incorrect or that dst is not a proper string).

If the src and dst strings overlap, the behavior is undefined.

Like snprintf(3), the strlcpy() and strlcat() functions return the total length of
the string they tried to create.  For strlcpy() that means the length of src.  For
strlcat() that means the initial length of dst plus the length of src.

If the return value is >= dstsize, the output string has been truncated.  It is the
caller's responsibility to handle this. */

size_t	ft_strlcat(char * restrict dst, const char * restrict src, size_t dstsize);