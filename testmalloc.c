/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkiziler <bkiziler@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/08 18:08:35 by bkiziler          #+#    #+#             */
/*   Updated: 2022/10/08 18:15:38 by bkiziler         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <stdlib.h>
int main()
{
    int *ptr;
    int i;

    ptr = malloc(9*sizeof(char));
    while (i < 9)
    {
        ((char *)ptr)[i] = "abcdef"[i];
        i++;
    }
    printf("%s", (char *)ptr);
}