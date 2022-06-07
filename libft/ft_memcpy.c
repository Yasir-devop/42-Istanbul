/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yasir <42istanbul.com.tr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/09 05:15:48 by yasir             #+#    #+#             */
/*   Updated: 2022/01/31 12:38:18 by ykurt            ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	char	*a;
	char	*b;

	if (!dst && !src)
		return (NULL);
	a = (char *)src;
	b = (char *)dst;
	while (n--)
		*b++ = *a++;
	return (dst);
}

/*int main(void)
{
	char src[] = "burasiIstanbulCokGuzel";
	char dst[] = "Heloooo!!";
	puts(dst);
        printf("\n");
        ft_memcpy(dst,src,23); //(n parametresi (size + 1) olmalı.)
	puts(dst);
}*/
