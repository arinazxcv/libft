/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: minell <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/09 18:16:39 by minell            #+#    #+#             */
/*   Updated: 2021/10/28 13:53:55 by minell           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/**
 * удаляет с начала и с конца все символы указанные в *с.
 */
static size_t	ft_match( const char str, const char *c)
{
	size_t	i;

	i = 0;
	if (!str)
		return (0);
	while (c[i])
	{
		if (str == c[i])
			return (1);
		i++;
	}
	return (0);
}

static size_t	ft_theEnd(const char *s, const char *c)
{
	int	j;

	j = ft_strlen(s) - 1;
	if (!s)
		return (0);
	while (ft_match(s[j], c) && j)
		j--;
	if (j < 0)
		return (0);
	return (j);
}

static size_t	ft_buf( const char *s, const char *c)
{
	size_t	buf;
	size_t	i;
	size_t	j;

	buf = 0;
	i = 0;
	j = ft_strlen(s) - 1;
	if (!s)
		return (0);
	while (ft_match(s[i], c) && s[i])
	{
		i++;
		buf++;
	}
	while (ft_match(s[j], c) && j > i)
	{
		j--;
		buf++;
	}
	return (ft_strlen(s) - buf);
}

char	*ft_strtrim(char const *s, char const *c)
{
	size_t	i;
	size_t	j;
	size_t	buf;
	size_t	z;
	char	*arr;

	i = 0;
	z = 0;
	j = ft_theEnd(s, c);
	if (j == 0)
		return (ft_strdup(""));
	buf = ft_buf(s, c);
	arr = (char *)malloc(sizeof(char) * buf + 1);
	if (!arr)
		return (NULL);
	while (ft_match(s[i], c))
		i++;
	if (j > 0)
	{
		while (i <= j)
			arr[z++] = s[i++];
	}
	arr[z] = '\0';
	return (arr);
}
