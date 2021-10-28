/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: minell <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/09 18:15:48 by minell            #+#    #+#             */
/*   Updated: 2021/10/09 18:15:54 by minell           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/**
 * ищет с конца символ с в строке возвращает указатель на искомый символ.
 */
char	*ft_strrchr(const char *s, int c)
{
	char	*str;
	size_t	i;
	int		temp;

	i = 0;
	temp = -1;
	str = (char *)s;
	while (str[i])
	{
		if (str[i] == (char)c)
			temp = i;
		i++;
	}
	if (str[i] == c)
		temp = i;
	if (temp == -1)
		return (0);
	while ((char) temp > 0)
	{
		str++;
		temp--;
	}
	return (str);
}
