/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   isalpha.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkiziler <bkiziler@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/06 12:23:40 by bkiziler          #+#    #+#             */
/*   Updated: 2022/10/07 08:31:43 by bkiziler         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
int ft_isalpha(int c)
{
   return(((unsigned char)c >= 65 && (unsigned char)c <= 90) || ((unsigned char)c <= 122 && (unsigned char)c >= 97));
} 