/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zmunkhja <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/25 11:58:46 by zmunkhja          #+#    #+#             */
/*   Updated: 2022/02/21 15:01:16 by zmunkhja         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
The function strdup() is used to duplicate a string. 
It returns a pointer to null-terminated byte string.
+1 is to make room for the NULL terminator.
*/

#include "libft.h"

char	*ft_strdup(const char *s)
{
	int		i;
	int		j;
	char	*str;

	i = 0;
	j = ft_strlen(s);
	str = (char *)malloc(sizeof(*str) * (j + 1));
	while (i < j)
	{
		str[i] = s[i];
		i++;
	}
	str[i] = '\0';
	return (str);
}
