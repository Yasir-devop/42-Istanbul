/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ykurt <42istanbul.com.tr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/03 17:05:50 by ykurt             #+#    #+#             */
/*   Updated: 2022/01/22 06:06:16 by yasir            ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//#include <stdio.h>

char	*ft_strrchr(const char *s, int c)
{
	size_t	pos;

	pos = ft_strlen(s) + 1;
	while (pos--)
	{
		if (s[pos] == (char)c)
			return ((char *)(s + pos));
	}
	return (NULL);
}

/*int main(void)
{
	char s[] = "yasirku4@gmail.com";
	printf("%s",ft_strrchr(s, 46));
}*/
