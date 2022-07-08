/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   client.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zmunkhja <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/29 13:44:00 by zmunkhja          #+#    #+#             */
/*   Updated: 2022/07/05 16:35:06 by zmunkhja         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
#include <signal.h>
#include "libft/libft.h"
/*
static void receive(int sig)
{
    static  int received;

    received = 0;
    if(sig == SIGUSR1)
    {
        ++received;
    }
    else
    {
        ft_putnbr_fd(received,1);
        ft_putchar_fd('\n', 1);
        exit(0);
    }
}

static  void ft_kill(pid_t pid, char *sig)
{
    int i;
    char    c;

    while(*sig)
    {
        i = 8;
        c = *sig++;
        while(i--)
        {
            if(c >> i & 1)
            {
                ft_kill(pid, SIGUSR2);
            }
            else
            {
                ft_kill(pid, SIGUSR1);
                }
                usleep(300);
                }
                }
    i = 8;
    while(i--)
    {
        ft_kill(pid , SIGUSR1);
        usleep(100);
    }
}

int main(int argc, char **argv)
{
    if(argc != 3 || !ft_strlen(argv[2]))
    {
        return (1);
    }
    ft_putstr_fd("Sent :\n", 1);
    ft_putnbr_fd(ft_strlen(argv[2]), 1);
    ft_putchar_fd('\n', 1);
    ft_putstr_fd("Received : \n", 1);
    signal(SIGUSR1, receive);
    signal(SIGUSR2, receive);
    ft_kill(ft_atoi(argv[1]), argv[2]);
    while(1){
        pause();
    }
    return(0);
}
*/

void	send_bit(int pid, char *str, size_t len)
{
	int		shift;
	size_t	i;

	i = 0;
	while (i <= len)
	{
		shift = 0;
		while (shift < 7)
		{
			if ((str[i] >> shift) & 1)
				kill(pid, SIGUSR2);
			else
				kill(pid, SIGUSR1);
			shift++;
			usleep(300);
		}
		i++;
	}
}

int	main(int argc, char **argv)
{
	int		pid;
	char	*str;

	if (argc == 3)
	{
		pid = ft_atoi(argv[1]);
		str = argv[2];
		send_bit(pid, str, ft_strlen(str));
	}
	else
		ft_putstr_fd("Received : \n", 1);
}