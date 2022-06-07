/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ykurt <42istanbul.com.tr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/03 13:21:55 by ykurt             #+#    #+#             */
/*   Updated: 2022/01/31 11:49:29 by ykurt            ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//#include <stdio.h>

size_t	ft_strlcpy(char *dest, const char *src, size_t size)
{
	size_t	src_size;
	size_t	i;

	src_size = ft_strlen(src);
	if (!size)
		return (src_size);
	i = 0;
	while (src[i] && i < (size - 1))
	{	
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (src_size);
}

/*int main()
{
	char dest[] = "";
	char src[] = "merhaba_yasir";
	printf("%zu", ft_strlcpy(dest, src, 8));
}*/
