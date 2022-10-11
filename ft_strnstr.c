/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkiziler <bkiziler@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/08 09:58:24 by bkiziler          #+#    #+#             */
/*   Updated: 2022/10/11 09:04:44 by bkiziler         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t i;
	size_t b;

	i = 0;
	b = 0;

	if (ft_strlen(needle) == 0)
		return (haystack);
	while(haystack[i])
	{
		while (haystack [i + b] == needle[b] && (i + b) < len)
		{
			if (needle[b + 1] == '\0')
				return (haystack);
			b++;
		}
	i++;
	}
	return (0);
}
