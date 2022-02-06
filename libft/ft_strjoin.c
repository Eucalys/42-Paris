/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cnguyen <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/26 18:00:55 by cnguyen           #+#    #+#             */
/*   Updated: 2021/12/02 17:57:56 by cnguyen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
#include <stdlib.h>
#include <unistd.h>

size_t	ft_strlen(const char *str)
{
	int	i;

	i = 0;
	while(str[i] != '\0')
		i++;
	return (i);
}

char	*ft_strjoin(char const *s1, char const *s2)
{
	const char	str;
	int			ss1;
	int			ss2;
	int			i;

	ss1 = ft_strlen(((char *)s1) - 1) ;
	ss2 = ft_strlen((char *)s2);
	str = malloc(sizeof(char *) * (ss1 + ss2 + 1));
	if(!str)
		return (NULL);
	if(str)
	{
		while(*s1 != '\0')
			*str++ = *s1++;
		while(*s2 != '\0')
			*str++ = *s2++;
		*str++;
		*str = '\0'
	}
	return ((char *)str);
}
