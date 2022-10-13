/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkiziler <bkiziler@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/12 17:25:56 by bkiziler          #+#    #+#             */
/*   Updated: 2022/10/13 12:38:59 by bkiziler         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

char *ft_itoa(int n)
{
    char *str;
    int base;
    static int a;
    int sign;

    sign = 1;
    base = 0;
    if (n < 0)
    {
        sign = -sign;
        n = -n;
        base++;
    }
    a = n;
    while (a >= 1)
    {
        a = a / 10;
        base++;  
    }
    str = malloc((sizeof(char) * base) + 1);
    base--;
    a = n;
    while(a >= 1)
    {
        str[base] = (a % 10) + 48;
        a = a / 10;
        base--;
    }
    if (sign == -1)
        str[base] = '-';
    return(str);
}
int main()
{
   printf("%s", ft_itoa(-42357));
}
