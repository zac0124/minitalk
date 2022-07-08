/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zmunkhja <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/27 10:38:25 by zmunkhja          #+#    #+#             */
/*   Updated: 2022/02/21 14:53:49 by zmunkhja         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* trim beginning and end of string with the specified characters.
 strtrim removes all whitespace characters from the beginning and 
 the end of a string. As whitespace is counted everything for which 
 isspace(3) returns true.  */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*trimmed;
	size_t	end;

	if (!s1 || !set)
		return (NULL);
	while (*s1 && ft_strchr(set, *s1))
		s1++;
	end = ft_strlen(s1);
	while (end && ft_strchr(set, s1[end]))
	{
		end--;
	}
	trimmed = ft_substr((char *)s1, 0, end + 1);
	return (trimmed);
}
