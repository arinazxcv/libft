/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: minell <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/28 13:57:49 by minell            #+#    #+#             */
/*   Updated: 2021/10/28 13:57:50 by minell           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/**
 * выделяет память и заполняет новый элемент.
 */
t_list	*ft_lstnew(void *content)
{
	t_list	*element;
	element = (t_list *)malloc(sizeof(*element));
	if (!element)
		return (0);
	element->next = 0;
	element->content = content;
	return (element);
}
