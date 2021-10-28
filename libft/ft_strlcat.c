/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: minell <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/09 18:12:23 by minell            #+#    #+#             */
/*   Updated: 2021/10/09 18:12:27 by minell           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/**
 * выделяет память и конкатенирует строки.
 */
size_t	ft_strlcat(char *dest, const char *src, size_t n)
{
	size_t	len;
	size_t	len_s;

	len = 0;
	len_s = ft_strlen(src);
	while (*dest && n > 0)
	{
		dest++;
		len++;
		n--;
	}
	while (*src && n > 1)
	{
		*dest++ = *src++;
		n--;
	}
	if (*src == 0 || n == 1)
		*dest = '\0';
	return (len_s + len);
}
