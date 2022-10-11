/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkiziler <bkiziler@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/08 09:32:47 by bkiziler          #+#    #+#             */
/*   Updated: 2022/10/11 09:04:30 by bkiziler         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned int i;

	i = 0;
	while((char *)s1 && (char *)s2 && i < n)
	{
		if (((char *)s1)[i] == ((char *)s2)[i])
			i++;
	}
	return (((char *)s1)[i] - ((char *)s2)[i]);
}
