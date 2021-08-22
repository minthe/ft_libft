/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vfuhlenb <vfuhlenb@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/22 09:33:04 by vfuhlenb          #+#    #+#             */
/*   Updated: 2021/08/22 10:54:52 by vfuhlenb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
The strdup() function allocates sufficient memory for a copy of the string s1,
does the copy, and returns a pointer to it.  The pointer may
subsequently be used as an argument to the function free(3).

If insufficient memory is available, NULL is returned and errno is set to ENOMEM.
The strndup() function copies at most n characters from the string s1 always NUL terminating the copied string. */

char	*ft_strdup(const char *s1)
{
	char *new;
	size_t len;

	len = ft_strlen(s1);
	new = (char * )malloc(sizeof(char) * (len + 1));
	if (!new)
		return (NULL);
	ft_strlcpy(new, s1, len + 1);
	return (new);
}