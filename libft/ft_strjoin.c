/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zmunkhja <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/27 10:11:29 by zmunkhja          #+#    #+#             */
/*   Updated: 2022/02/21 13:17:26 by zmunkhja         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/* first str + second str = joint with memory allocation with 0 by +1 */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*joint;
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	if (!s1 || !s2)
		return (NULL);
	joint = (char *)malloc(ft_strlen(s1) + ft_strlen(s2) + 1);
	if (!joint)
		return (NULL);
	while (i < ft_strlen(s1))
	{
		joint[i] = s1[i];
		i++;
	}
	while (j < ft_strlen(s2))
	{
		joint[i] = s2[j];
		i++;
		j++;
	}
	joint[i] = '\0';
	return (joint);
}
