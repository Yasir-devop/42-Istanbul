/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft_utils.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ykurt <42istanbul.com.tr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/24 11:13:05 by ykurt             #+#    #+#             */
/*   Updated: 2022/05/24 11:28:20 by ykurt            ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include "../minitalk.h"

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

void	*ft_memset(void *b, int c, size_t len)
{
	char	*a;

	a = (char *)b;
	while (len > 0)
	{
		*a++ = c;
		len--;
	}
	return (b);
}

size_t	ft_strlen(const char *s)
{
	size_t	i;

	i = 0;
	while (s[i] != '\0')
		i++;
	return (i);
}
