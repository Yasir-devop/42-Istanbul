/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ykurt <42istanbul.com.tr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/09 12:52:52 by ykurt             #+#    #+#             */
/*   Updated: 2022/02/15 12:52:51 by ykurt            ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"
//#include <stdio.h>

char	*new_line_check(char *out)
{
	char	*string;

	string = ft_strchr(out, '\n');
	if (!string)
	{
		free(out);
		return (NULL);
	}
	if (*(string + 1))
		string = ft_strdup(string + 1);
	else
		string = NULL;
	free(out);
	return (string);
}

int	ft_strlen_modified(char *out)
{
	int	i;

	i = 0;
	if (!out)
		return (0);
	while (out[i] && out[i] != '\n')
		i++;
	return (i);
}

char	*ft_read_line(int read_byte, char *out, char *in, int fd)
{
	while (read_byte)
	{
		if (!out)
			out = ft_strdup(in);
		else
			out = ft_strjoin(out, in);
		if (ft_strchr(in, '\n'))
			break ;
		read_byte = read(fd, in, BUFFER_SIZE);
		in[read_byte] = '\0';
	}
	return (out);
}

char	*get_next_line(int fd)
{
	static char	*out;
	char		*in;
	char		*result;
	int			read_byte;

	if (fd == -1 || BUFFER_SIZE <= 0)
		return (NULL);
	in = (char *)malloc((BUFFER_SIZE + 1) * sizeof(char));
	read_byte = read(fd, in, BUFFER_SIZE);
	if (!in || read_byte == -1)
	{
		free(in);
		return (NULL);
	}
	in[read_byte] = '\0';
	out = ft_read_line(read_byte, out, in, fd);
	result = ft_substr(out, 0, ft_strlen_modified(out) + 1);
	out = new_line_check(out);
	free(in);
	return (result);
}

/*int main(void)
{
    int fd;

    fd = open("deneme.txt", O_RDONLY);
    printf("\nOffical --> %s\n", get_next_line(fd));
    //printf("Offical --> %s\n", get_next_line(fd));
    //printf("Offical --> %s\n", get_next_line(fd));
    return (0);
}*/
