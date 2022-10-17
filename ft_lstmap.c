/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkiziler <bkiziler@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/17 13:16:58 by bkiziler          #+#    #+#             */
/*   Updated: 2022/10/17 14:06:53 by bkiziler         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list *ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new;
	t_list	*temp;
	void	*cont;

	if (lst == NULL)
		return (0);
	new = NULL;
	while (lst != NULL)
	{
		cont = f(temp -> content);
		temp = ft_lstnew(cont);
		if (temp == NULL)
		{
			del(cont);
			ft_lstclear(&new, del);
			return(NULL);
		}
		ft_lstadd_back(new, temp);
		lst = lst -> next;
	}
	return (new);
}
