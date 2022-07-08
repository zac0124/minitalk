/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zmunkhja <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/27 09:50:24 by zmunkhja          #+#    #+#             */
/*   Updated: 2022/02/21 14:44:26 by zmunkhja         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* Returns the substring of the given string at the given start position with 
 * the given length (or smaller if the length of the original string is less 
 * than start + length, or length is bigger than MAXSTRINGLEN).
 * 
 * Simply say that function extract substring from the given string.
 **/

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	size_t	j;
	char	*str;

	str = (char *)malloc(sizeof(*s) * (len + 1));
	if (str == 0)
		return (NULL);
	i = 0;
	j = 0;
	while (s[i])
	{
		if (i >= start && j < len)
		{
			str[j] = s[i];
			j++;
		}
		i++;
	}
	str[j] = 0;
	return (str);
}
