/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   minitalk.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ykurt <42istanbul.com.tr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/24 11:10:49 by ykurt             #+#    #+#             */
/*   Updated: 2022/05/24 16:20:24 by ykurt            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MINITALK_H
# define MINITALK_H
# include <signal.h>
# include <stdlib.h>
# include <stdarg.h>
# include <stddef.h>
# include <unistd.h>

char	*convert_bin(char c, char *array, int i);
int		ft_pow(int x, int y);
int		convert_dex(char *bin);
size_t	ft_strlen(const char *s);
int		ft_atoi(const char *str);
void	*ft_memset(void *b, int c, size_t len);
int		ft_printf(const char *string, ...);
int		message_print(char c);
void	read_message(int signum);
void	send_signal(char *array, int pid);
char	*ft_free(char *array);

#endif
