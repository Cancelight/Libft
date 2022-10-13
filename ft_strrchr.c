/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkiziler <bkiziler@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/08 08:57:15 by bkiziler          #+#    #+#             */
/*   Updated: 2022/10/13 19:46:03 by bkiziler         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int	ss;

	ss = ft_strlen(s);
	while (ss >= 0)
	{
		if (s[ss] == (char)c)
			return (&((char *)s)[ss]);
		ss--;
	}
	return (0);
}
