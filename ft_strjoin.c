/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vfuhlenb <vfuhlenb@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/22 14:07:00 by vfuhlenb          #+#    #+#             */
/*   Updated: 2021/08/23 17:12:04 by vfuhlenb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* Allocates (with malloc(3)) and returns a new string,
which is the result of the concatenation of ’s1’ and ’s2’.

Return: The new string. NULL if the allocation fails. */

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*new;
	size_t	len;

	if (!s1 || !s2)
		return (NULL);
	len = (ft_strlen(s1) + (ft_strlen(s2))) + 1;
	new = (char *)ft_calloc(sizeof(char), len);
	if (!new)
		return (NULL);
	ft_strlcpy(new, s1, len);
	ft_strlcat(new, s2, len);
	return (new);
}
