/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zmunkhja <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/01 10:03:48 by zmunkhja          #+#    #+#             */
/*   Updated: 2022/02/21 14:00:27 by zmunkhja         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* function constructs a string representation of an integer. 
in other words it converts integer datatype to string datatype */

#include "libft.h"

static unsigned int	ft_numsize(int n)
{
	unsigned int	len;

	if (n == 0)
		return (1);
	len = 0;
	if (n < 0)
		len += 1;
	while (n != 0)
	{
		n /= 10;
		len++;
	}
	return (len);
}

char	*ft_itoa(int n)
{
	char			*str;
	unsigned int	num;
	unsigned int	len;

	len = ft_numsize(n);
	str = (char *)malloc(sizeof(char) * (len + 1));
	if (str == NULL)
		return (NULL);
	if (n < 0)
	{
		str[0] = '-';
		num = -n;
	}
	else
		num = n;
	if (num == 0)
		str[0] = '0';
	str[len] = '\0';
	while (num != 0)
	{
		str[len - 1] = (num % 10) + '0';
		num = num / 10;
		len--;
	}
	return (str);
}
/*
 int main()
 {
	int nmb = 89;
char *val = ft_itoa(nmb);
printf("This is number %d\n", nmb);
printf("This is string %s\n", val);
return 0;
}
*/
