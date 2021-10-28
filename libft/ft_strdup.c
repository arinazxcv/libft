/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: minell <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/09 18:08:05 by minell            #+#    #+#             */
/*   Updated: 2021/10/09 18:08:52 by minell           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/**
 * выделяет память и создает дубликат строки.
 */
char	*ft_strdup(const char *str)
{
	char	*arr;
	size_t	i;
	size_t	buf;

	i = 0;
	buf = ft_strlen(str);
	arr = (char *)malloc(sizeof(char) * buf + 1);
	if (!arr)
		return (NULL);
	else
	{
		while (str[i])
		{
			arr[i] = (char)str[i];
			i++;
		}
	}
	arr[i] = '\0';
	return (arr);
}
