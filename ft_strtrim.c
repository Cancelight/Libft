/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkiziler <bkiziler@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/12 14:19:57 by bkiziler          #+#    #+#             */
/*   Updated: 2022/10/13 19:38:27 by bkiziler         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	check(char c, char const *ptr)
{
	int	i;

	i = 0;
	while (ptr[i])
	{
		if (c == ptr[i])
			return (0);
		i++;
	}
	return (1);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*ptr;
	int		i;
	int		n;

	i = 0;
	n = ft_strlen(s1) - 1;
	while (s1[i])
	{
		if (check (s1[i], set))
			break ;
		i++;
	}
	while (n >= 0)
	{
		if (check (s1[n], set))
			break ;
		n--;
	}
	ptr = ft_substr(s1, i, n - i + 1);
	return (ptr);
}
