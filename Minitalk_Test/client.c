/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   client.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jngew <jngew@student.42singapore.sg>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/19 20:27:08 by jngew             #+#    #+#             */
/*   Updated: 2024/08/22 17:39:18 by jngew            ###   ########.fr       */
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
			usleep(50);
		}
		letter++;
	}
	bit = 0;
	while (bit++ < 8)
	{
		kill (pid, SIGUSR1);
		usleep(50);
	}
}

int	main(int argc, char **argv)
{
	char	*message;
	int		serv_id;

	if (argc == 3)
	{
		serv_id = ft_atoi(argv[1]);
		if (!serv_id)
		{
			ft_printf("[ERROR] Invalid PID.\n");
			return (0);
		}
		message = argv[2];
		if (message[0] == '\0')
		{
			ft_printf("[ERROR] No message provided.\n");
			return (0);
		}
		send_signals(serv_id, message);
	}
	else
	{
		ft_printf("[ERROR] Incorrect number of arguments.\n");
		ft_printf("Usage: ./client <PID> <MESSAGE>");
	}
	return (0);
}
