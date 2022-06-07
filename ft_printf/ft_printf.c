/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ykurt <42istanbul.com.tr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/29 12:00:37 by ykurt             #+#    #+#             */
/*   Updated: 2022/03/29 12:00:40 by ykurt            ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	put(unsigned long num, char *value, int check_door, int base_len)
{
	int	len;
	int	i;

	i = 0;
	len = 0;
	if (check_door == 1)
		len += write(1, "0x", 2);
	if ((int)num < 0 && check_door == 2)
	{
		len += write(1, "-", 1);
		num = num * -1;
	}
	if (check_door == 3)
	{
		if (!value)
			return (write(1, "(null)", 6));
		else
			while (value[i])
				len += write(1, &value[i++], 1);
		return (len);
	}
	if (num / base_len != 0)
		len += put(num / base_len, value, 0, base_len);
	len += write(1, &value[num % base_len], 1);
	return (len);
}

int	control(char c, va_list data)
{
	int		ch;

	if (c == 'c')
	{
		ch = va_arg(data, int);
		return (write(1, &ch, 1));
	}
	else if (c == 's')
		return (put(0, va_arg(data, char *), 3, 0));
	else if (c == 'p')
		return (put(va_arg(data, unsigned long), "0123456789abcdef", 1, 16));
	else if (c == 'd' || c == 'i')
		return (put(va_arg(data, int), "0123456789", 2, 10));
	else if (c == 'u')
		return (put(va_arg(data, unsigned), "0123456789", 0, 10));
	else if (c == 'x')
		return (put(va_arg(data, unsigned), "0123456789abcdef", 0, 16));
	else if (c == 'X')
		return (put(va_arg(data, unsigned), "0123456789ABCDEF", 0, 16));
	else if (c == '%')
		return (write(1, &c, 1));
	return (0);
}

int	ft_printf(const char *str, ...)
{
	int		len;
	va_list	list_str;

	len = 0;
	va_start(list_str, str);
	while (*str != '\0')
	{
		if (*str == '%')
		{
			str++;
			while (*str == ' ')
				str++;
			len += control(*str, list_str);
		}
		else
			len += write(1, &*str, 1);
		str++;
	}
	va_end(list_str);
	return (len);
}
