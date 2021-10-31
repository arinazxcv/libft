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
char	*ft_strrchr(const char *str, int c)
{
	int		i;
	int		last_char;
	char	*copy_str;

	i = 0;
	last_char = -1;
	copy_str = (char *)str;
	while (str[i])
	{
		if (str[i] == (char )c)
			last_char = i;
		i++;
	}
	if (str[i] == (char )c)
		last_char = i;
	if (last_char == -1)
		return (0);
	while (last_char)
	{
		copy_str++;
		last_char--;
	}
	return (copy_str);
}
