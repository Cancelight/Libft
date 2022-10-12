/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkiziler <bkiziler@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/12 17:25:56 by bkiziler          #+#    #+#             */
/*   Updated: 2022/10/12 18:27:34 by bkiziler         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_itoa(int n)
{
    char *str;
    int i;
    int base;
    int a;

    base = 0;
    i = 0;
    if (n < 0)
        n = -n;
    while (a >= 1)
    {
        a = n / 10;
        base++;  
    }
    str = malloc((sizeof(char) * base) + 1);
}