/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jessy <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/16 19:32:01 by jessy             #+#    #+#             */
/*   Updated: 2020/11/16 19:32:04 by jessy            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list *now_list;

	while (*lst)
	{
		del((*lst)->content);
		now_list = *lst;
		*lst = now_list->next;
		free(now_list);
	}
	lst = 0;
}
