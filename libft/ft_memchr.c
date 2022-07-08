/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zmunkhja <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/25 09:45:41 by zmunkhja          #+#    #+#             */
/*   Updated: 2022/02/21 12:41:52 by zmunkhja         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* The C library function void *memchr(const void *str, int c, size_t n) 
searches for the first occurrence of the character c (an unsigned char) 
in the first n bytes of the string pointed to, by the argument str. 
Parameters

    str − This is the pointer to the block of memory where the search is 
	performed.

    c − This is the value to be passed as an int, but the function 
	performs a byte per byte search using the unsigned char conversion 
	of this value.

    n − This is the number of bytes to be analyzed.

Return Value

This function returns a pointer to the matching byte or NULL 
if the character does not occur in the given memory area.*/

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*ptr;
	size_t			i;

	ptr = (unsigned char *)s;
	i = 0;
	while (n--)
	{
		if (ptr[i] == (unsigned char)c)
			return (ptr + i);
		i++;
	}
	return (NULL);
}
