/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkiziler <bkiziler@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/16 19:34:57 by bkiziler          #+#    #+#             */
/*   Updated: 2022/10/17 17:34:16 by bkiziler         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*a ;

	if (!lst || !new)
		return ;
	if (*lst == NULL)
		*lst = new;
	{
		a = ft_lstlast(*lst);
		a -> next = new;
		new -> next = NULL;
	}
}
