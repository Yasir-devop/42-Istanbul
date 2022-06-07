/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yasir <42istanbul.com.tr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/09 05:20:55 by yasir             #+#    #+#             */
/*   Updated: 2022/01/31 17:08:19 by ykurt            ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char	*s;
	char	*d;
	size_t	i;

	if (!dst && !src)
		return (NULL);
	s = (char *)src;
	d = (char *)dst;
	i = 0;
	if (d > s)
	{
		while (len-- > 0)
			d[len] = s[len];
	}
	else
	{
		while (i < len)
		{
			d[i] = s[i];
			i++;
		}
	}
	return (dst);
}

/*int main(void)
{
        char src[] = "merhaba";
	char dst[] = "bbbbbbbbbbbbb";
        puts(src);
	puts(dst);
        printf("\n");
        ft_memmove(dst,src,5);
        puts(src);
	puts(dst);
}*/
