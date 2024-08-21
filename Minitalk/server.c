/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   server.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jngew <jngew@student.42singapore.sg>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/19 20:27:01 by jngew             #+#    #+#             */
/*   Updated: 2024/08/20 19:14:03 by jngew            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minitalk.h"

void	signal_handler(int signal)
{
	if (signal == SIGUSR1)
	{
		d
	}
	else if (signal == SIGUSR2)
	{
		d
	}
}

int	main(void)
{
	ft_printf("Welcome to Max's Minitalk Server\n");
	ft_printf("Server's PID is: %d\n", getpid());
	return (0);
}
