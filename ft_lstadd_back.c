/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkiziler <bkiziler@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/16 19:34:57 by bkiziler          #+#    #+#             */
/*   Updated: 2022/10/17 14:33:59 by bkiziler         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

void ft_lstadd_back(t_list **lst, t_list *new)
{
	if (!lst || !new)
		return(0);
	if (*lst == NULL)
		*lst = new;
	{
		t_list * a;
		a = ft_lstlast(*lst);
		a -> next = new;
		new -> next = NULL;
	}
}
