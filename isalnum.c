/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   isalnum.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkiziler <bkiziler@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/06 15:39:24 by bkiziler          #+#    #+#             */
/*   Updated: 2022/10/06 16:28:21 by bkiziler         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_isalnum(int c)
{
    unsigned char u;
    u = c;
    return((u >= 65 && u <= 90) || (u <= 122 && u >= 97) || (u <= 57 && u >= 48));
}