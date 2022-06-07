/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yasir <42istanbul.com.tr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/09 05:27:51 by yasir             #+#    #+#             */
/*   Updated: 2022/01/22 07:35:06 by yasir            ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//#include <stdio.h>

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t		idx;
	size_t		src_idx;
	size_t		value;

	if (size == 0)
		return (ft_strlen(src));
	else if (size < ft_strlen(dest))
		value = ft_strlen(src) + size;
	else
		value = ft_strlen(src) + ft_strlen(dest);
	idx = 0;
	while (dest[idx] != '\0')
		idx++;
	src_idx = 0;
	while (src[src_idx] != '\0' && idx + 1 < size)
	{
		dest[idx] = src[src_idx];
		src_idx++;
		idx++;
	}
	dest[idx] = '\0';
	return (value);
}

/*int main(void)
{
	char src[] = "yasir_kurt";
	char dest[] = "_mahir";
	printf("%zu",ft_strlcat(dest,src,2));
}*/
