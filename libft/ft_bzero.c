/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ykurt <42istanbul.com.tr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/04 17:01:52 by ykurt             #+#    #+#             */
/*   Updated: 2022/01/21 08:50:14 by yasir            ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	char	*clean;

	clean = s;
	while (n != 0)
	{
		*clean++ = 0;
		n--;
	}
}

/*int main(void)
{
	char a[] = "merhaba";
	printf("Once::: %c\n",*a);
	ft_bzero(a,5);
	printf("Sonra::: %c",*a);
	return (0);
}*/
