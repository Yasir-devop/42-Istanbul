/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yasir <42istanbul.com.tr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/09 05:19:15 by yasir             #+#    #+#             */
/*   Updated: 2022/02/01 13:07:43 by ykurt            ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//#include <stdio.h>

int	ft_abs(int nb)
{
	if (nb < 0)
		nb = nb * (-1);
	return (nb);
}

int	len(int n)
{
	int	i;
	int	k;

	i = 0;
	k = 1;
	if (n == 0)
		return (1);
	while (n > 0)
	{
		n = n / 10;
		i++;
	}
	if (n < 0)
	{
		while (n)
		{
			n = n / 10;
			k++;
		}
		return (k);
	}
	return (i);
}

char	*ft_itoa(int n)
{
	char	*p;
	int		string;
	int		is_negative;

	is_negative = n < 0;
	string = len(n);
	p = (char *)malloc(sizeof(char) * (string + 1));
	if (!p)
		return (NULL);
	p[string] = '\0';
	string--;
	while (string >= 0)
	{
		p[string--] = (ft_abs(n % 10) + 48);
		n /= 10;
	}
	if (is_negative)
		p[0] = '-';
	return (p);
}

/*int main(void)
{
	printf("%s", ft_itoa(1));
	printf("\n%s", ft_itoa(175));
	printf("\n%s", ft_itoa(-1));
	printf("\n%s", ft_itoa(0));
}*/
