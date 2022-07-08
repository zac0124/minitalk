/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zmunkhja <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/27 10:53:28 by zmunkhja          #+#    #+#             */
/*   Updated: 2022/02/21 12:32:29 by zmunkhja         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* checks for any printable character including space.*/

#include "libft.h"

int	ft_isprint(int c)
{
	if (c >= 32 && c < 127)
		return (1);
	return (0);
}
