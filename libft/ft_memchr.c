/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: minell <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/09 18:04:43 by minell            #+#    #+#             */
/*   Updated: 2021/10/09 18:04:47 by minell           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/**
 * ищет в n байтах массива s, символ c
 * и возвращает указатель на первое совпадение.
 */
void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	*s1;

	i = 0;
	if (!s)
		return (NULL);
	s1 = (unsigned char *)s;
	while (n)
	{
		if (s1[i] == (unsigned char)c)
			return (s1 + i);
		n--;
		i++;
	}
	return (NULL);
}
