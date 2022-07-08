/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   server.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zmunkhja <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/29 13:45:14 by zmunkhja          #+#    #+#             */
/*   Updated: 2022/07/06 14:26:36 by zmunkhja         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
#include <signal.h>
#include "libft/libft.h"

static void send_bit(int sig, siginfo_t *info, void *context)
{
    static int  i;
    static pid_t    pid;
    static char c;

    i = 0;
    pid = 0;
    c = 0;

    (void)context;
    if(!pid)
    {
        pid = info->si_pid;
    }
    c |= (sig == SIGUSR2);
    if(++i == 8)
    {
        i = 0;
        if(!c)
        {
            kill(pid, SIGUSR2);
            pid = 0;
            return ;
        }
        ft_putchar_fd(c,1);
        c = 0;
        kill(pid, SIGUSR1);
    }
    else
    {
        c <<= 1;
    }
    
}

int	main(void)
{
	struct sigaction	s_sigaction;

	ft_putstr_fd("Server PID: ", 1);
	ft_putnbr_fd(getpid(), 1);
	ft_putchar_fd('\n', 1);
	s_sigaction.sa_sigaction = send_bit;
	s_sigaction.sa_flags = SA_SIGINFO;
	sigaction(SIGUSR1, &s_sigaction, 0);
	sigaction(SIGUSR2, &s_sigaction, 0);
	while (1)
		pause();
	return (0);
}