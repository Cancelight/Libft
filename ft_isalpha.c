/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkiziler <bkiziler@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/07 11:09:24 by bkiziler          #+#    #+#             */
/*   Updated: 2022/10/11 09:04:59 by bkiziler         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalpha(int c)
{
	return (((unsigned char)c >= 65 && (unsigned char)c <= 90) \
	|| ((unsigned char)c <= 122 && (unsigned char)c >= 97));
}
