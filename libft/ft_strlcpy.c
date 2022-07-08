/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zmunkhja <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/19 15:06:08 by zmunkhja          #+#    #+#             */
/*   Updated: 2022/02/22 14:31:01 by zmunkhja         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
The strlcpy() and strlcat() functions copy and concatenate (link (things) 
together in a chain or series.) 
strings respectively. They are designed to be safer, more consistent, and 
less error prone replacements for strncpy(3) and strncat(3). 
Unlike those functions, strlcpy() and strlcat() take the full size of the 
buffer (not just the length) and guarantee to NUL-terminate the result (as 
long as size is larger than 0 or, in the case of strlcat(),
 as long as there is at least one byte free in dst). 
*/

#include "libft.h"

size_t	ft_strlcpy(char *dest, const char *src, size_t size)
{
	size_t	i;

	i = 0;
	if (size == 0)
	{
		while (src[i])
			i++;
		return (i);
	}
	while (i < size - 1 && src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	if (i < size)
		dest[i] = '\0';
	while (src[i] != '\0')
		i++;
	return (i);
}
/*
int main ()
{
	char	test1[] = "Test 1";
	char	test2[] = "test 2";

	ft_strlcpy(test1, test2, 1);
	printf("%s\n", test1);
	return(0);
}
*/
