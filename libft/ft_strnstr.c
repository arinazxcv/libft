/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: minell <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/09 18:14:54 by minell            #+#    #+#             */
/*   Updated: 2021/10/09 18:15:00 by minell           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/**
 * ищет в строке подстроку.
 * возвращает указатель на первый элемент подстроки если нашел.
 */
char	*ft_strnstr(const char *stack, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;
	size_t	len_n;

	i = 0;
	j = 0;
	len_n = ft_strlen(needle);
	if (needle[0] == 0)
		return ((char *)stack);
	while (*stack && len > 0 && *needle)
	{
		if (!(ft_memcmp(stack, needle, len_n)) && len >= len_n)
			return ((char *)stack);
		stack++;
		len--;
	}
	return (NULL);
}
