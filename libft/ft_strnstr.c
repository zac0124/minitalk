/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zmunkhja <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/25 10:12:49 by zmunkhja          #+#    #+#             */
/*   Updated: 2022/02/21 14:41:12 by zmunkhja         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
The strnstr() function locates the	first occurrence of the	null-termi-
     nated string little in the	string big, where not more than	len characters
     are searched.  Characters that appear after a `\0'	character are not
     searched.	Since the strnstr() function is	a FreeBSD specific API,	it
     should only be used when portability is not a concern.

RETURN VALUES
     If	little is an empty string, big is returned; if little occurs nowhere
     in	big, NULL is returned; otherwise a pointer to the first	character of
     the first occurrence of little is returned.
     */

#include "libft.h"

char	*ft_strnstr(const char *dst, const char *src, size_t len)
{
	size_t	i;
	size_t	j;
	char	*p_dst;
	char	*p_src;

	i = 0;
	j = 0;
	p_dst = (char *)dst;
	p_src = (char *)src;
	while ((i < len) && *(p_dst + i))
	{
		while (*(p_src + j) && *(p_src + j) == *(p_dst + i + j)
			&& ((i + j) < len))
			j++;
		if (!(*(p_src + j)))
			return ((char *)&p_dst[i]);
		j = 0;
		i++;
	}
	if (!p_src[0])
		return ((char *)&p_dst[i]);
	return (NULL);
}
