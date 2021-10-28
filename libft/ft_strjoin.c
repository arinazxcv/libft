/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: minell <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/09 18:09:15 by minell            #+#    #+#             */
/*   Updated: 2021/10/09 18:09:51 by minell           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/**
 * выделяет память и конкатенирует строки.
 * возвращает массив.
 */
char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*arr;
	size_t	i;
	size_t	j;
	size_t	buf;

	i = 0;
	j = 0;
	buf = ft_strlen(s1) + ft_strlen(s2);
	arr = (char *)malloc(sizeof(char) * buf + 1);
	if (!arr)
		return (NULL);
	else
	{
		while (s1 && s1[i])
			arr[j++] = s1[i++];
		i = 0;
		while (s2 && s2[i])
			arr[j++] = s2[i++];
		arr[j] = '\0';
	}
	return (arr);
}
