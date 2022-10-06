/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   isalpha.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkiziler <bkiziler@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/06 12:23:40 by bkiziler          #+#    #+#             */
/*   Updated: 2022/10/06 15:33:38 by bkiziler         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>
int ft_isalpha(int c)
{
   return(((unsigned char)c >= 65 && (unsigned char)c <= 90) || ((unsigned char)c <= 122 && (unsigned char)c >= 97));
} 