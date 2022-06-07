/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yasir <42istanbul.com.tr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/09 05:27:30 by yasir             #+#    #+#             */
/*   Updated: 2022/01/31 12:42:38 by ykurt            ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//#include <stdio.h>

char	*ft_strjoin(char const *s1, char const *s2)
{
	int		i;
	int		a;
	int		i_join;
	char	*join;

	if (!s1 || !s2)
		return (0);
	a = ft_strlen((char *)s1) + ft_strlen((char *)s2);
	join = malloc(sizeof(char) * (a + 1));
	if (!join)
		return (NULL);
	i = 0;
	i_join = 0;
	while (s1[i])
		join[i_join++] = s1[i++];
	i = 0;
	while (s2[i])
		join[i_join++] = s2[i++];
	join[i_join] = '\0';
	return (join);
}

/*int main(void) 
{
	char s1[] = "merhaba_";
	char s2[] = "yasir";
	printf("%s",ft_strjoin(s1,s2));
}*/
