/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: minell <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/28 13:52:52 by minell            #+#    #+#             */
/*   Updated: 2021/10/28 13:52:59 by minell           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/**itoa конвертирует целое число n
 * в строчный эквивалент и помещает результат в строку.
 */
static int	ft_buff(int n)
{
	int	size;

	size = 0;
	if (n == 0)
		return (1);
	while (n)
	{	
		size++;
		n = n / 10;
	}
	return (size);
}

static int	ft_isNeg(int n)
{
	if (n < 0)
		return (n * -1);
	else
		return (n);
}

char	*ft_itoa(int n)
{
	int		i;
	int		buf;
	int		neg;
	char	*str;

	i = 0;
	buf = ft_buff(n);
	neg = n < 0;
	buf += neg;
	str = malloc(buf + 1);
	if (!str)
		return (NULL);
	str[buf] = '\0';
	if (n == 0)
		str[0] = '0';
	if (n < 0)
	{
		str[0] = '-';
	}
	while (n != 0)
	{
		str[--buf] = ft_isNeg(n % 10) + '0';
		n = n / 10;
	}
	return (str);
}
