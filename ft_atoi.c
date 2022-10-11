/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkiziler <bkiziler@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/08 14:37:13 by bkiziler          #+#    #+#             */
/*   Updated: 2022/10/11 09:05:10 by bkiziler         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
int ft_atoi (const char *str)
{
	int sign;
	int i;
	int number;

	number = 0;
	sign = 1;
	i = 0;
	while(str[i] == 32 || str[i] == '\t')
	{
		i++;
	}
	if (str[i] == 43 || str[i] == 45)
	{
		if (str[i] == 45)
			sign *= -1;
		i++;
	}
	if (str[i] <= '0' && str[i] >= '9')
		return (0);
	while(str[i] >= '0' && str[i] <= '9')
	{
		number = (str[i] - 48) + (number * 10);
		i++;
	}
	return (number * sign);

}
