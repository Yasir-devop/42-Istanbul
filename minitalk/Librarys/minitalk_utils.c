/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   minitalk_utils.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ykurt <42istanbul.com.tr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/24 11:13:21 by ykurt             #+#    #+#             */
/*   Updated: 2022/05/24 16:20:22 by ykurt            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../minitalk.h"

char	*convert_bin(char c, char *array, int i)
{
	int		temp;

	temp = c;
	temp %= 2;
	array[i] = temp + '0';
	i -= 1;
	if (c > 1)
		convert_bin(c / 2, array, i);
	return (array);
}

int	convert_dex(char *bin)
{
	int		i;
	int		j;
	int		result;

	i = ft_strlen(bin) - 1;
	j = 0;
	result = 0;
	while (bin[i])
	{
		if (bin[i] != '0')
			result += ft_pow(2, j);
		i--;
		j++;
	}
	return (result);
}

int	ft_pow(int x, int y)
{
	int	result;

	if (y == 0)
		return (1);
	result = 1;
	while (y > 0)
	{
		result = result * x;
		y--;
	}
	return (result);
}

int	message_print(char c)
{
	static char	*array;
	static int	i;
	int			dex;

	if (!i)
		i = 0;
	if (!array)
	{
		array = (char *)malloc(9 * sizeof(char));
		if (!array)
			return (1);
		array[8] = '\0';
	}
	array[i] = c;
	i++;
	if (i == 8)
	{
		dex = convert_dex(array);
		ft_printf("%c", dex);
		array = ft_free(array);
		i = 0;
	}
	return (0);
}

char	*ft_free(char *array)
{
	free(array);
	array = NULL;
	return (array);
}
