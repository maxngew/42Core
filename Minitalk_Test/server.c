/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   server.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jngew <jngew@student.42singapore.sg>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/19 20:27:01 by jngew             #+#    #+#             */
/*   Updated: 2024/08/27 23:05:29 by jngew            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minitalk.h"

void	process_signal(int signum, int *res, int *counter)
{
	if (signum == SIGUSR1)
		*res = *res << 1;
	else if (signum == SIGUSR2)
		*res = ((*res << 1) | 1);
	(*counter)++;
}

char	*store_str(char const *s1, char const letter)
{
	int		x;
	int		y;
	char	*store;

	x = 0;
	y = 0;
	store = (char *)malloc((sizeof(char) * ft_strlen(s1) + 2));
	if (!store)
		return (NULL);
	while (s1[x])
		store[y++] = s1[x++];
	store[y++] = letter;
	store[y] = '\0';
	free ((void *)(s1));
	return (store);
}

void	signal_handler(int signum)
{
	static int	counter = 0;
	static int	res = 0;
	static char	*final = NULL;

	if (!final)
		final = ft_strdup("");
	process_signal(signum, &res, &counter);
	if (counter == 8)
	{
		final = store_str(final, res);
		if (res == '\0')
		{
			ft_printf("%s\n", final);
			free (final);
			final = NULL;
		}
		counter = 0;
		res = 0;
	}
}

int	main(void)
{
	struct sigaction	signal_received;

	ft_printf("Welcome to Max's Minitalk Server\n");
	ft_printf("Server's PID is: %d\n", getpid());
	sigemptyset(&signal_received.sa_mask);
	signal_received.sa_handler = signal_handler;
	signal_received.sa_flags = 0;
	sigaction(SIGUSR1, &signal_received, NULL);
	sigaction(SIGUSR2, &signal_received, NULL);
	while (1)
		pause ();
}
