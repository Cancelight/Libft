/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkiziler <bkiziler@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/08 09:58:24 by bkiziler          #+#    #+#             */
/*   Updated: 2022/10/18 12:16:47 by bkiziler         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	b;

	i = 0;
	b = 0;
	if (*needle == 0)
		return ((char *)haystack);
	else if (!haystack || len == 0)
		return (0);
	while (haystack[i])
	{
		b = 0;
		while (haystack [i + b] == needle[b] && (i + b) < len)
		{
			if (needle[b + 1] == '\0')
				return ((char *)&haystack[i]);
			b++;
		}
	i++;
	}
	return (0);
}
