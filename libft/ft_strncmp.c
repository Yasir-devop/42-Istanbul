/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ykurt <42istanbul.com.tr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/03 16:57:39 by ykurt             #+#    #+#             */
/*   Updated: 2022/01/22 06:16:30 by yasir            ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//#include <stdio.h>

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	while (*s1 != '\0' && *s2 != '\0' && n > 0)
	{
		if (*s1 != *s2)
			break ;
		s1++;
		s2++;
		n--;
	}
	if (n == 0)
		return (0);
	return ((unsigned char)(*s1) - (unsigned char)(*s2));
}

/*int main(void)
{
	char s1[] = "yasin";
	char s2[] = "yasir";
	printf("%d", ft_strncmp(s1,s2,5));
}*/
