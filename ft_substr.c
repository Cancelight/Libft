/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkiziler <bkiziler@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/11 11:05:20 by bkiziler          #+#    #+#             */
/*   Updated: 2022/10/11 12:26:40 by bkiziler         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_substr(char const *s, unsigned int start,size_t len)
{
    int i;
    char *ptr;
    if (!s)
        return (0);
    if(start > ft_sterlen(s))
        return(0);
    if(len >= ft_sterlen(s) - start)
        len = ft_sterlen(s) - start - 1;
    ptr = ft_strdup(s + start);
    i = ft_sterlen(ptr);
     while(ptr[i] && i >len)
    {
        ptr[i] = '/0';
        i--;
    }
    ptr[len + 1] = '\0';
    return (ptr);
    
    
    
        
        
    
}