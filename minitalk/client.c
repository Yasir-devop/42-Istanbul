/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   client.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ykurt <42istanbul.com.tr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/24 11:10:26 by ykurt             #+#    #+#             */
/*   Updated: 2022/05/24 16:20:23 by ykurt            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minitalk.h"

int	main(int args_sayisi, char *args_dizisi[])
{
	int		pid;
	int		i;
	char	*array;

	i = 0;
	if (args_sayisi == 3)
	{
		array = (char *)malloc(9 * sizeof(char));
		if (!array)
			return (1);
		array[8] = '\0';
		pid = ft_atoi(args_dizisi[1]);
		while (args_dizisi[2][i])
		{
			array = convert_bin(args_dizisi[2][i], ft_memset(array, '0', 8), 7);
			send_signal(array, pid);
			i++;
		}
		free(array);
	}
	else
		ft_printf("Error");
	return (0);
}

void	send_signal(char *array, int pid)
{
	int	j;

	j = 0;
	while (array[j])
	{
		if (array[j] == '0')
			kill(pid, SIGUSR2);
		else
			kill(pid, SIGUSR1);
		usleep(200);
		j++;
	}
}
