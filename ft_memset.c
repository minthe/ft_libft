/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vfuhlenb <vfuhlenb@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/13 08:54:41 by vfuhlenb          #+#    #+#             */
/*   Updated: 2021/08/11 23:28:07 by vfuhlenb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <string.h>

/* The memset() function fills the first n bytes of the memory area
pointed to by s with the constant byte c. */

void *ft_memset(void *s, int c, size_t n)
{
	size_t counter;
	
	counter = 0;
	while (counter < n)
	{
		((char *)s)[counter] = c;
		counter++;
	}
	return (s);
}

/*
int    main(void)
{
    char    *chars;

    chars = malloc(sizeof(char) * 5); // DELETE MAIN
    printf("%02x ", chars[0]);
    printf("%02x ", chars[1]);
    printf("%02x ", chars[2]);
    printf("%02x ", chars[3]);
    printf("%02x ", chars[4]);
    printf("\n");

    memset(chars, 'd', 4);
    printf("%c ", chars[0]);
    printf("%c ", chars[1]);
    printf("%c ", chars[2]);
    printf("%c ", chars[3]);
    printf("%c ", chars[4]);
    printf("%c ", chars[7]);

    printf("\n");

    chars = ft_memset(chars, 'd', 4);

    printf("%02x ", chars[0]);
    printf("%02x ", chars[1]);
    printf("%02x ", chars[2]);
    printf("%02x ", chars[3]);
    printf("%02x ", chars[4]);
	printf("%02x ", chars[7]);
    printf("\n");
    return (0);
}
*/