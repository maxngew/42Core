/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   client.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jngew <jngew@student.42singapore.sg>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/19 20:27:08 by jngew             #+#    #+#             */
/*   Updated: 2024/09/30 16:10:52 by jngew            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minitalk.h"

void	send_signals(int pid, char *message)
{
	int	letter;
	int	bit;

	letter = 0;
	while (message[letter])
	{
		bit = -1;
		while (++bit < 8)
		{
			if (((unsigned char)(message[letter] >> (7 - bit)) & 1) == 0)
				kill (pid, SIGUSR1);
			else if (((unsigned char)(message[letter] >> (7 - bit)) & 1) == 1)
				kill (pid, SIGUSR2);
			usleep(150);
		}
		letter++;
	}
	bit = 0;
	while (bit++ < 8)
	{
		kill (pid, SIGUSR1);
		usleep(150);
	}
}

void	pid_checker(int serv_id)
{
	if (serv_id <= 0)
	{
		ft_printf("[Error] Invalid PID.\n");
		exit (1);
	}
	if (kill(serv_id, 0) == -1)
	{
		if (errno == ESRCH)
		{
			ft_printf("[Error] PID %d is not found.\n", serv_id);
			exit (1);
		}
		else if (errno == EPERM)
		{
			ft_printf("[Error] Not allow for PID %d.\n", serv_id);
			exit (1);
		}
		else
		{
			ft_printf("[Error] Error with PID %d.\n", serv_id);
			exit (1);
		}
	}
}

void	ack_handler(int signum)
{
	if (signum == SIGUSR1)
		ft_printf("Server acknowledged the message.\n");
}

int	main(int argc, char **argv)
{
	char	*message;
	int		serv_id;

	if (argc == 3)
	{
		serv_id = ft_atoi(argv[1]);
		pid_checker(serv_id);
		message = argv[2];
		if (message[0] == '\0')
		{
			ft_printf("[ERROR] No message provided.\n");
			return (1);
		}
		signal (SIGUSR1, ack_handler);
		send_signals(serv_id, message);
	}
	else
	{
		ft_printf("[ERROR] Incorrect number of arguments.\n");
		ft_printf("Usage: ./client <PID> <MESSAGE>");
		return (1);
	}
	return (0);
}
