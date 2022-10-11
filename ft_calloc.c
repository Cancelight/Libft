/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkiziler <bkiziler@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/11 08:25:29 by bkiziler          #+#    #+#             */
/*   Updated: 2022/10/11 10:40:11 by bkiziler         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

void *ft_calloc(size_t count, size_t size)
{
    void *ptr;
    ptr = malloc(count*size);
    if (ptr == NULL)
        return (0);
    ft_bzero(ptr, size*count);
        return(ptr);
}