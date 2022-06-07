/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yasir <42istanbul.com.tr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/09 05:28:52 by yasir             #+#    #+#             */
/*   Updated: 2022/01/28 06:59:16 by yasir            ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//#include <stdio.h>

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	i;

	if (!s1 || !set)
		return (NULL);
	while (*s1 && ft_strchr(set,*s1))
		s1++;
	i = ft_strlen(s1);
	while (ft_strrchr(set, *(s1 + i - 1)))
		i--;
	return (ft_substr(s1, 0, i));
}

/*int main(void)
{
	char s1[] = "----merhaba----";
	printf("%s",ft_strtrim(s1,"-"));
}*/
