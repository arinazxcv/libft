/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: minell <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/28 13:56:49 by minell            #+#    #+#             */
/*   Updated: 2021/10/28 13:56:53 by minell           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/**
 * очищает список и освобождает память.
 */
void ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*temp;
	t_list	*buf;

	temp = *lst;
	while(temp)
	{
		del(temp->content);
		buf = temp;
		temp = temp->next;
		free(buf);
	}
	*lst = 0;
}
