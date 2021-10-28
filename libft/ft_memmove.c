/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: minell <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/09 18:06:23 by minell            #+#    #+#             */
/*   Updated: 2021/10/09 18:06:28 by minell           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/**
 * копирует n байт из массива src d dst
 * и возвращает указатель на начало массива dst.
 * с учетом пересечения памяти.
 */
void	*ft_memmove(void *dst, const char *src, size_t len)
{
	unsigned char	*len_d;
	unsigned char	*len_s;

	len_d = (unsigned char *) dst;
	len_s = (unsigned char *) src;
	if (len_d < len_s)
	{
		while (len != 0)
		{
			*len_d++ = *len_s++;
			len--;
		}
	}
	else if (len_d > len_s)
	{
		while (len != 0)
		{	
			len--;
			len_d[len] = len_s[len];
		}
	}
	return (dst);
}
