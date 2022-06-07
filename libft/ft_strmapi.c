/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yasir <42istanbul.com.tr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/09 05:28:21 by yasir             #+#    #+#             */
/*   Updated: 2022/01/28 05:11:14 by yasir            ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//#include <stdio.h>

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*c;
	int		i;

	if (!s || !f)
		return (NULL);
	c = (char *)malloc(sizeof(char) * (ft_strlen(s) + 1));
	if (!c)
		return (NULL);
	i = 0;
	while (s[i])
	{
		c[i] = f(i, s[i]);
		++i;
	}
	c[i] = '\0';
	return (c);
}

/*char f(unsigned int i, char c)
{
	c -= 32;
	return (c); 
}*/

/*int main(void)
{
	char s[] = "merhaba";
	printf("%s",ft_strmapi(s,f));
}*/
