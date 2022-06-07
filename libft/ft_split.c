/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yasir <42istanbul.com.tr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/09 05:25:55 by yasir             #+#    #+#             */
/*   Updated: 2022/01/31 16:25:48 by ykurt            ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//#include <stdio.h>

size_t	a(char *s, char c)
{
	size_t	i;

	i = 0;
	while (*s)
	{
		if (*s != c && (*(s + 1) == c || *(s + 1) == '\0'))
			i++;
		s++;
	}
	return (i);
}

char	**ft_split(char const *s, char c)
{
	char	**dizi;
	size_t	i;
	size_t	j;
	size_t	z;

	if (!s)
		return (NULL);
	dizi = (char **)malloc((a((char *)s, c) + 1) * sizeof(char *));
	if (!dizi)
		return (NULL);
	i = 0;
	j = 0;
	z = 0;
	while (a((char *)s, c) != 0 && z < a((char *)s, c))
	{	
		j = 0;
		while (s[i] == c)
			i++;
		while (s[i + j] && s[i + j] != c)
			j++;
		dizi[z++] = ft_substr(s, i, j);
		i += j;
	}
	dizi[z] = 0;
	return (dizi);
}

/*int main(void)
{
	char a[] = "ali,metin,yasir,nuri,oner,kurt";
	char **res = ft_split(a,',');
	int index = 0;
	while(res[index])
	{
		printf("%d - %s\n",index,res[index]);
		index++;
	}
}*/
