/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ykurt <42istanbul.com.tr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/03 16:04:50 by ykurt             #+#    #+#             */
/*   Updated: 2022/01/28 05:47:46 by yasir            ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
//#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	while (*s)
	{
		if (*s == (char)c)
			return ((char *)s);
		s++;
	}
	if (*s == (char)c)
		return ((char *)s);
	return (NULL);
}

/*int main(void)
{
	char s[] = "";
	printf("%s",ft_strchr(s,46));
	return (0);
}*/
