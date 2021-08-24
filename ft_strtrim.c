/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vfuhlenb <vfuhlenb@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/22 15:43:28 by vfuhlenb          #+#    #+#             */
/*   Updated: 2021/08/24 13:53:13 by vfuhlenb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	i;
	size_t	j;
	char	*new;

	if (!s1)
		return (NULL);
	i = 0;
	j = ft_strlen(s1);
	if ((ft_strlen(set) == 0) || (ft_strlen(s1) == 0))
	{
		new = (char *)malloc(sizeof(char) * j);
		if (!new)
			return (NULL);
		return (new);
	}
	while (ft_strchr(set, s1[i]) && s1[i])
		i++;
	while (ft_strrchr(set, s1[j - 1]) && (j > i))
		j--;
	new = (char *)malloc(sizeof(char) * (j - i + 1));
	if (!new)
		return (NULL);
	ft_strlcpy(new, (s1 + i), (j - i + 1));
	return (new);
}
