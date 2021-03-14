/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jessy <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/16 19:31:39 by jessy             #+#    #+#             */
/*   Updated: 2020/11/16 19:31:41 by jessy            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **alst, t_list *new)
{
	t_list *lst;

	if (alst)
	{
		if (*alst == 0)
			*alst = new;
		else
		{
			lst = *alst;
			while (lst->next)
				lst = lst->next;
			lst->next = new;
		}
	}
}
