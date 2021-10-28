/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: minell <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/09 18:17:34 by minell            #+#    #+#             */
/*   Updated: 2021/10/09 18:17:38 by minell           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/**
 * создает подстроку со старта, лен байт.
 */

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*arr;
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	if (!s)
		return (NULL);
	if (ft_strlen(s) <= start)
		return (ft_strdup(""));
	arr = (char *)malloc(sizeof(char ) * (len + 1));
	if (!arr)
		return (NULL);
	arr[len] = '\0';
	while (s[i] && s)
	{
		if (i >= start && j < len)
		{
			arr[j] = s[i];
			j++;
		}
		i++;
	}
	return (arr);
}
