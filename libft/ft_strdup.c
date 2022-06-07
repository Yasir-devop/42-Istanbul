/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yasir <42istanbul.com.tr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/09 05:27:06 by yasir             #+#    #+#             */
/*   Updated: 2022/01/31 12:42:01 by ykurt            ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//#include <stdio.h>

char	*ft_strdup(const char *s)
{
	int		s_len;
	char	*copy;

	s_len = ft_strlen(s) + 1;
	copy = (char *)malloc(sizeof(char) * s_len);
	if (!copy)
		return (NULL);
	return ((char *)ft_memcpy(copy, s, s_len));
}

/*int main(void)
{
	char s[] = "yasir";
	printf("%s",ft_strdup(s));
}*/
