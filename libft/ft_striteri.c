/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yasir <42istanbul.com.tr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/24 03:01:13 by yasir             #+#    #+#             */
/*   Updated: 2022/01/28 07:01:15 by yasir            ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//#include <stdio.h>
void	ft_striteri(char *s, void (*f)(unsigned int, char *))
{
	unsigned int	i;

	if (!s)
		return ;
	i = 0;
	while (s[i] != '\0')
	{
		f(i, s + i);
		i++;
	}
}

/*void f(unsigned int i, char *s)
{
	if(s[i] >= 65 && s[i] <= 90)
		s[i] += 32;
}*/

/*int main(void)
{
	char s[] = "MERHABA BENIM ADIM YASIR";
	ft_striteri(s,f);

	printf("%s",s);
	return (0);
}*/
