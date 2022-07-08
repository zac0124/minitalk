/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zmunkhja <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/18 12:33:04 by zmunkhja          #+#    #+#             */
/*   Updated: 2022/02/21 12:15:22 by zmunkhja         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* Erases the data in the n bytes of the memory starting at the location 
 *pointed to by s, by writing zeros (bytes containing '\0') to that area.*/

#include "libft.h"

void	*ft_bzero(void *s, size_t n)
{
	unsigned char	*ptr;

	ptr = (unsigned char *)s;
	while (n > 0)
	{
		*ptr = '\0';
		ptr++;
		n--;
	}
	return (s);
}

/*
int main()
{
	char str[100] = "Test string is here.";
	ft_bzero(str +3, 1);
	printf("Changed to: %s\n", str);
	return 0;
}
*/
