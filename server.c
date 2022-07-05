/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   server.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zmunkhja <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/29 13:45:14 by zmunkhja          #+#    #+#             */
/*   Updated: 2022/07/05 16:16:42 by zmunkhja         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
#include <signal.h>
#include "printf/include/ft_printf.h"

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
    g_msg.index++;
    if(g_msg.index == 7)
    {
        ft_printf("%c", g_msg.c);
        if(!g_msg.c)
        {
            ft_printf("\nError");
        }
        g_msg.c = 0;
        g_msg.index = 0;
    }
}

int main(void)
{
    ft_printf("The test server PID is %d\n", getpid());
    while(1)
    {
        signal(SIGUSR2, ft_bit_handler);
        signal(SIGUSR1, ft_bit_handler);
        pause();
    }
    return (0);
}
