/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ykurt <42istanbul.com.tr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/09 12:53:21 by ykurt             #+#    #+#             */
/*   Updated: 2022/02/09 15:27:38 by ykurt            ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

size_t	ft_strlen(const char *s)
{
	size_t	i;

	i = 0;
	while (s[i] != '\0')
		i++;
	return (i);
}

char	*ft_strchr(const char *s, int c)
{
	int	i;

	i = 0;
	if (!s)
		return (NULL);
	while (s[i] != '\0')
	{
		if (s[i] == (char)c)
			return ((char *)&s[i]);
		i++;
	}
	if (c == '\0')
		return ((char *)&s[i]);
	return (0);
}

char	*ft_strjoin(char *s1, char const *s2)
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
	free(s1);
	return (join);
}

char	*ft_strdup(const char *s)
{
	int		i;
	int		ls;
	char	*dup;

	i = 0;
	ls = ft_strlen(s);
	ls++;
	dup = malloc(ls);
	if (!dup)
		return (NULL);
	while (ls > 0)
	{
		dup[i] = s[i];
		i++;
		ls--;
	}
	return (dup);
}

char	*ft_substr(char const *s, size_t start, size_t len)
{
	unsigned int	i;
	char			*source;
	char			*dizi;

	if (!s)
		return (NULL);
	if (start >= ft_strlen(s))
		return (ft_strdup(""));
	if (len > ft_strlen(s))
		len = ft_strlen(s);
	i = 0;
	source = (char *)s;
	dizi = (char *)malloc(len + 1 * sizeof(char));
	if (!dizi)
		return (NULL);
	while (i < len)
	{
		dizi[i] = source[start + i];
		i++;
	}
	dizi[i] = '\0';
	return (dizi);
}
