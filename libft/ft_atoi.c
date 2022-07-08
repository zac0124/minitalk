/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zmunkhja <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/18 12:32:11 by zmunkhja          #+#    #+#             */
/*   Updated: 2022/02/22 14:32:07 by zmunkhja         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*The C library function int atoi(const char *str) converts 
the string argument str to an integer (type int).
Parameters

    str − This is the string representation of an integral number.

Return Value

This function returns the converted integral number as an int value. 
If no valid conversion could be performed, it returns zero.

\t (Horizontal tab)

\f (Form Feed page break)

\r (Carriage Return) – We use it to position the cursor to the 
beginning of the current line.

\n new line

\v (Vertical tab)
*/

#include "libft.h"

int	ft_atoi(const char *str)
{
	int	result;
	int	i;
	int	sign;

	result = 0;
	i = 0;
	sign = 1;
	while (str[i] == ' ' || str[i] == '\n' || str[i] == '\r'
		|| str[i] == '\t' || str[i] == '\v' || str[i] == '\f')
		i++;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			sign = -1;
		i++;
	}
	while (str[i] != '\0' && str[i] >= '0' && str[i] <= '9')
	{
		result = result * 10 + str[i] - '0';
		i++;
	}
	return (sign * result);
}
/*
int main()
{
	char str[] = "-Adelaie2022";
	int test = ft_atoi(str);
	printf ("%d ", test);
	return 0;
	}
*/
