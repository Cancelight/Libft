/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkiziler <bkiziler@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/17 12:32:26 by bkiziler          #+#    #+#             */
/*   Updated: 2022/10/17 12:59:26 by bkiziler         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void ft_lstiter(t_list *lst, void (*f)(void *))
{
	t_list *iter;

	if(!lst || !f)
		return(0);
	while (lst != NULL)
	{
		iter = lst -> next;
		f(lst -> content);
		lst = iter;
	}
}
