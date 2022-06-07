/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yasir <42istanbul.com.tr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/09 05:21:21 by yasir             #+#    #+#             */
/*   Updated: 2022/01/31 15:19:24 by ykurt            ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
#include "libft.h"

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

/*int main(void)
{
	char a[] = "yasirku4@gmail.com";
	puts(a);
	printf("\n");
	ft_memset(a,'$',8);
	puts(a);
}*/
