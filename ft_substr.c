/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkiziler <bkiziler@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/11 11:05:20 by bkiziler          #+#    #+#             */
/*   Updated: 2022/10/12 16:25:44 by bkiziler         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_substr(char const *s, unsigned int start,size_t len)
{
    size_t i;
    char *ptr;
    if (!s)
        return (0);
    if(start > ft_strlen(s))
        return(0);
    if(len >= ft_strlen(s) - start)
        len = ft_strlen(s) - start - 1;
    ptr = ft_strdup(s + start);
    i = ft_strlen(ptr);
     while(ptr[i] && i > len)
    {
        ptr[i] = '\0';
        i--;
    }
    ptr[len] = '\0';
    return (ptr);
}