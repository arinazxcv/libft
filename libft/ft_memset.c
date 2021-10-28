/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: minell <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/09 18:07:00 by minell            #+#    #+#             */
/*   Updated: 2021/10/09 18:07:05 by minell           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/**
 * заполняет n байт массива dst символом с
 * и возвращает указатель на начало массива dst.
 */
void	*ft_memset(void *dest, int c, size_t n)
{
	char	*temp;
	size_t	i;

	i = 0;
	temp = (char *)dest;
	while (n > i)
	{
		temp[i] = c;
		i++;
	}
	return (temp);
}