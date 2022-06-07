/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ykurt <42istanbul.com.tr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/04 16:00:44 by ykurt             #+#    #+#             */
/*   Updated: 2022/02/01 13:22:35 by ykurt            ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//#include <stdio.h>

int	ft_atoi(const char *str)
{
	int	sayi;
	int	isaret;

	sayi = 0;
	isaret = 1;
	while (*str == ' ' || *str == '\t' || *str == '\n' || \
			*str == '\r' || *str == '\v' || *str == '\f')
		str++;
	if (*str == '+' || *str == '-')
	{
		if (*str == '-')
			isaret *= -1;
		str++;
	}
	if (*str == '+' || *str == '-')
		return (0);
	while (*str && *str >= '0' && *str <= '9')
	{
		sayi = (sayi * 10) + (*str - '0');
		str++;
	}
	return (isaret * sayi);
}

/*int main(void)
{
	printf("%d",ft_atoi("+-2147483648"));
	printf("\n%d",atoi("+-2147483648"));
	return (0);
}*/
