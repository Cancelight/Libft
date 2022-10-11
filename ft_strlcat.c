/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkiziler <bkiziler@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/07 23:25:44 by bkiziler          #+#    #+#             */
/*   Updated: 2022/10/11 09:04:40 by bkiziler         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t s1;
	size_t s2;
	unsigned int i;

	i = 0;
	s1 = ft_strlen(src);
	s2 = ft_strlen(dst);
	while(src[i] && dstsize - s2 - 1 > i)
	{
		dst[s2  + i] = src[i];
		i++;
	}
	if(dstsize > s2)
		dst[s2 + i] = '\0';
	return (s1 + i);

}
