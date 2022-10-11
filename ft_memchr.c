/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkiziler <bkiziler@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/08 09:17:50 by bkiziler          #+#    #+#             */
/*   Updated: 2022/10/11 09:04:28 by bkiziler         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *ft_memchr(const void *s, int c, size_t n)
{
	size_t i;

	i = 0;
	while (((char *)s)[i] && i < n)
	{
		if (((char *)s)[i] == (unsigned char)c)
			return(&((char *)s)[i]);
		i++;
	}
	return (0);
}
