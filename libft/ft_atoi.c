/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: minell <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/09 18:00:11 by minell            #+#    #+#             */
/*   Updated: 2021/10/09 18:00:21 by minell           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/**
 * atoi конвертирует строку в величину типа int. 
*/
int	ft_atoi(const char *str)
{
	int	otr;
	int	res;
	int	len_s;
	int	i;

	i = 0;
	otr = 1;
	res = 0;
	len_s = ft_strlen(str);
	while ((str[i] >= 9 && str[i] <= 13) || str[i] == 32)
		i++;
	if (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			otr = otr * -1;
		i++;
	}	
	while (ft_isdigit(str[i]))
	{
		res = res * 10 + str[i] - '0';
		i++;
	}
	return (res * otr);
}
