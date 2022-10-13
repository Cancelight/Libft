/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkiziler <bkiziler@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/11 12:55:35 by bkiziler          #+#    #+#             */
/*   Updated: 2022/10/13 19:55:00 by bkiziler         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*ptr;

	ptr = malloc(sizeof(char) * ft_strlen(s1) +1);
	ft_strlcpy(ptr, s1, ft_strlen(s1));
	ft_strlcat(ptr, s2, ft_strlen(s1) + ft_strlen(s2));
	return (ptr);
}
