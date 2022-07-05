/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   client.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zmunkhja <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/29 13:44:00 by zmunkhja          #+#    #+#             */
/*   Updated: 2022/06/29 13:45:24 by zmunkhja         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
#include <signal.h>
#include "ft_printf.h"
#include "libft.h"

void    ft_send_bit(int pid, char *str, size_t len)
{
    int shift;
    size_t index;

    index = 0;
    while(index <= len)
    {
        shift = 0;
        while(shift < 7)
        {
            if((str[index] >> shift) & 1)
            {
                kill(pid, SIGUSR2);
            }
            else
            {
                kill(pid, SIGUSR1);
            }
            shift++;
            usleep(300);
        }
        index++;
    }
}

int main(int argc, char **argv)
{
    int pid;
    char    *str;

    if(argc == 3)
    {
        pid = ft_atoi(argv[1]);
        str = argv[2];
        ft_send_bit(pid, str, ft_strlen(str));
    }
    else
    {
        ft_printf("\n ERROR");
    }
    
}