/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zmunkhja <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/19 15:05:02 by zmunkhja          #+#    #+#             */
/*   Updated: 2022/02/21 14:51:20 by zmunkhja         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* Copies n bytes from memory area src to memory area dest.  The memory areas 
 * must not overlap.  Use memmove if the memory areas do overlap. */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t	i;
	char	*d;
	char	*s;

	i = 0;
	d = (char *)dest;
	s = (char *)src;
	while (i < n)
	{
		d[i] = s[i];
		i++;
	}
	return (dest);
}
/*
int	main()
{
	char dst[] = "Copies n bytes";
	char src[] = "from memory area src to memory area dest.";

	ft_memcpy(dst, src, sizeof(src));
	printf("dst new: %s\n", dst);
	return 0;
}
*/
