/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vfuhlenb <vfuhlenb@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/09 20:24:18 by vfuhlenb          #+#    #+#             */
/*   Updated: 2021/08/08 18:23:23 by vfuhlenb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* The bzero() function sets the first n bytes of the area
starting at s to zero. */

void ft_bzero(void *s, size_t n)
{
    n--;
    while (n)
    {
        ((char *)s)[n] = 0;
        n--;
    }
    ((char *)s)[n] = 0;
}

/*
int    main(void)
{
    char string[] = "Hello"; // DELETE MAIN
    char **p = malloc(24);
    p[2] = string;
    ft_bzero(string, 3);
}
*/
