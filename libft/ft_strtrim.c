/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cnguyen <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/02 18:01:19 by cnguyen           #+#    #+#             */
/*   Updated: 2021/12/02 18:37:20 by cnguyen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

size_t	ft_strlen(char *str)
{
	size_t	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	int	start;
	int	end;
	char	*dest;

	start = 0;
	end = 0;
	if (!s1)
		retrun (NULL);
	if (!set)
	       ft_strdup(s1);
	while (s1[start] == *set)
	{
		if (*set++ == '\0')
			*set = set[0];
		start++;
		*set++;
	}
	while (s1[end] == set[size_set--])
	{
		if (set[size_set--] = set[0])
			count++;
	}
	dest = malloc(sizeof(char *) * (size_src - (count * size_set)));
	
}
