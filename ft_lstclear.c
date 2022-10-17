/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkiziler <bkiziler@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/17 12:16:48 by bkiziler          #+#    #+#             */
/*   Updated: 2022/10/17 16:43:28 by bkiziler         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list *temp;
	t_list *first;

	if (!lst || !del)
		return ;
	first = *lst;
	*lst = (*lst) -> next;
	first = NULL;
	while(*lst != NULL)
	{
		temp = *lst;
		*lst = (*lst) -> next;
		ft_lstdelone(temp, del);
	}
}
