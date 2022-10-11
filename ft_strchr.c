/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkiziler <bkiziler@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/08 07:48:32 by bkiziler          #+#    #+#             */
/*   Updated: 2022/10/11 09:04:38 by bkiziler         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

 char *ft_strchr(const char *s, int c)
 {
	int i;

	i = 0;
	while (s[i])
	{
		if (s[i] == (char)c)
			return(&((char *)s)[i]);
		i++;
	}
	if (((char *)s)[i] == (char)c)
		return(&((char *)s)[i]);
	return (0);
 }
