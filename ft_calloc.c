/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vfuhlenb <vfuhlenb@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/10 09:57:38 by vfuhlenb          #+#    #+#             */
/*   Updated: 2021/07/11 08:11:01 by vfuhlenb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* The calloc() function allocates memory for an array of nmemb elements of 
size bytes each and returns a pointer to the allocated memory.
The memory is set to zero. If nmemb or size is 0, then calloc() returns NULL.
*/

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*p;

	if (nmemb == 0 || size == 0)
		return (0);
	p = malloc(nmemb * size);
	ft_bzero(p, nmemb * size);
	return (p);
}

/*
int    main(void)
{
  int *p; // DELETE MAIN
  p = ft_calloc(5, 4);
}
*/
