/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: minell <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/09 18:02:31 by minell            #+#    #+#             */
/*   Updated: 2021/10/09 18:02:35 by minell           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/**возвращает ненулевое значение,
 *  если его аргумент находится в пределах от 0 до 0x7F.
 */
int	ft_isascii(int c)
{
	if (c >= 0 && c <= 127)
		return (1);
	return (0);
}