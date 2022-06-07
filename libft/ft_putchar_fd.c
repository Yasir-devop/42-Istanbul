/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yasir <42istanbul.com.tr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/09 05:22:00 by yasir             #+#    #+#             */
/*   Updated: 2022/01/10 15:34:13 by ykurt            ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}

/*int main (void)
{
	ft_putchar_fd('a',0);
	ft_putchar_fd('b',1);
	ft_putchar_fd('c',2);
	return (0);
}*/
