/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zmunkhja <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/25 09:59:22 by zmunkhja          #+#    #+#             */
/*   Updated: 2022/02/21 12:43:18 by zmunkhja         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* The C library function compares the first n bytes of memory area 
str1 and memory area str2.
Parameters

    str1 − This is the pointer to a block of memory.

    str2 − This is the pointer to a block of memory.

    n − This is the number of bytes to be compared.

Return Value

    if Return value < 0 then it indicates str1 is less than str2.

    if Return value > 0 then it indicates str2 is less than str1.

    if Return value = 0 then it indicates str1 is equal to str2.
*/

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*ptr1;
	unsigned char	*ptr2;
	size_t			i;

	if (s1 == s2 || n == 0)
		return (0);
	ptr1 = (unsigned char *)s1;
	ptr2 = (unsigned char *)s2;
	i = 0;
	while (i < n)
	{
		if (ptr1[i] != ptr2[i])
			return (ptr1[i] - ptr2[i]);
		i++;
	}
	return (0);
}
