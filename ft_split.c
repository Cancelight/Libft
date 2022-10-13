/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkiziler <bkiziler@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/12 14:52:29 by bkiziler          #+#    #+#             */
/*   Updated: 2022/10/13 19:50:53 by bkiziler         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

int	countc(char const *a, char b)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (a[i])
	{
		if ((a[i] == b && ((a[i + 1] != '\0') && a[i + 1] != b)))
			count++;
		i++;
	}
	return (count);
}

char	**ft_split(char const *s, char c)
{
	int		i;
	int		a;
	int		count;
	int		n;
	char	**ptr;

	a = 0;
	i = 0;
	n = 0;
	if (s == NULL)
		return (0);
	count = countc(s, c);
	ptr = malloc(sizeof(char) * (count + 1));
	i = 0;
	while (a < count)
	{
		while (s[i] == c)
			i++;
		n = i;
		while (s[i] != c && s[i] != 0)
			i++;
		ptr[a] = ft_substr(s, n, i - n);
		a++;
	}
	return (ptr);
}
