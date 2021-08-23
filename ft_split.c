/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vfuhlenb <vfuhlenb@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/22 19:40:00 by vfuhlenb          #+#    #+#             */
/*   Updated: 2021/08/23 16:17:41 by vfuhlenb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	st_countwords(char *s, char c)
{
	int	i;
	int	count;

	i = 0;
	count = 1;
	while (s[i])
	{
		if ((s[i] == c) && (s[i + 1] != c) && s[i+1])
			count++;
		i++;
	}
	return (count);
}

char	**ft_split(char const *s, char c)
{
	int		x;
	int		end;
	int		start;
	char	**sentence;

	if (!s)
		return (NULL);
		
}