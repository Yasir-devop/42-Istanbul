/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   server.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ykurt <42istanbul.com.tr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/24 11:11:08 by ykurt             #+#    #+#             */
/*   Updated: 2022/05/24 16:20:34 by ykurt            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minitalk.h"

int	main(void)
{
	int		pid;

	pid = getpid();
	ft_printf("PID: %d\n", pid);
	signal(SIGUSR1, read_message);
	signal(SIGUSR2, read_message);
	while (1)
		pause();
	return (0);
}

void	read_message(int signum)
{
	if (signum == SIGUSR1)
		message_print('1');
	else
		message_print('0');
}
