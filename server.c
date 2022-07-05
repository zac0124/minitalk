/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   server.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zmunkhja <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/29 13:45:14 by zmunkhja          #+#    #+#             */
/*   Updated: 2022/06/29 13:45:28 by zmunkhja         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
#include <signal.h>
#include "ft_printf.h"

typedef struct server_message
{
    char    c;
    size_t  index;
}   text_message;
text_message    g_msg;

void    ft_bit_handler(int  bit)
{
    int index;

    index = 0;
    g_msg.c += ((bit & 1) << g_msg.index);


}