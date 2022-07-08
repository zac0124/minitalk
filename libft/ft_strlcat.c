/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zmunkhja <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/19 15:05:49 by zmunkhja          #+#    #+#             */
/*   Updated: 2022/02/21 14:34:38 by zmunkhja         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
The strlcpy() and strlcat() functions copy and concatenate strings respectively. 
They are designed to be safer, more consistent, and less error prone 
replacements for strncpy(3) and strncat(3). Unlike those functions, strlcpy() 
and strlcat() take the full size of the buffer (not just the length) and 
guarantee to NUL-terminate the result (as long as size is larger than 0 or, 
in the case of strlcat(), as long as there is at least one byte free in dst). 
*/

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	while (dst[i] && i < size)
		i++;
	while (src[j] && (i + j + 1) < size)
	{
		dst[i + j] = src[j];
		j++;
	}
	if (i < size)
		dst[i + j] = '\0';
	return (i + ft_strlen(src));
}
/*
int main ()
{
	char	test1[] = "Testadsf1";
	char	test2[] = "testadsf2";

	ft_strlcat(test1, test2, 1);
	printf("%s\n", test1);
	return(0);
}
*/
