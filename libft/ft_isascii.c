/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zmunkhja <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/18 12:36:23 by zmunkhja          #+#    #+#             */
/*   Updated: 2022/01/18 12:36:27 by zmunkhja         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* checks if c is a 7-bit unsigned char value that fits into the ASCII set */

#include "libft.h"

int	ft_isascii(int c)
{
	if (c >= 0 && c <= 127)
		return (1);
	return (0);
}
