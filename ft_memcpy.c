/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   memcpy.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkiziler <bkiziler@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/07 10:56:04 by bkiziler          #+#    #+#             */
/*   Updated: 2022/10/07 18:28:03 by bkiziler         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	int i;
	i = 0;
	unsigned char *a;
	unsigned char *b;
	a= (unsigned char *)dst;
	b=(unsigned char *)src;

	while(i < n)
	{
			a[i] = b[i];
			i++;
	}
	return (a);
}
