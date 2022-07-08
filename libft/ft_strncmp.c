/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zmunkhja <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/25 09:24:34 by zmunkhja          #+#    #+#             */
/*   Updated: 2022/02/21 15:14:06 by zmunkhja         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
In the C Programming Language, the strncmp function returns a negative, 
zero, or positive integer depending on whether the first n characters 
of the object pointed to by s1 are less than, equal to, or greater than 
the first n characters of the object pointed to by s2.
Parameters or Arguments

s1
    An array to compare.
s2
    An array to compare.
n
    The number of characters to compare.

Returns

The strncmp function returns an integer. The return values are as follows:
Return Value 	Explanation
0 means	s1 and s2 are equal
Negative integer means The stopping character in s1 was less than the 
stopping character in s2
Positive integer means The stopping character in s1 was greater than 
the stopping character in s2
*/

#include "libft.h"

int	ft_strncmp(const char *s1, char *s2, size_t n)
{
	while (*s1 != '\0' && *s1 == *s2 && n > 0)
	{
		s1++;
		s2++;
		n--;
	}
	if (n == 0)
		return (0);
	return (*(unsigned char *)s1 - *(unsigned char *)s2);
}
