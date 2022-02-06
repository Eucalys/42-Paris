/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cnguyen <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/26 17:13:40 by cnguyen           #+#    #+#             */
/*   Updated: 2021/12/02 17:47:53 by cnguyen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*sub;
	int	i;

	i = 0;
	if (*s != '\0')
		sub = malloc(sizeof(s) * (len + 1));
	if (!(sub))
		return (NULL);
	if (sub)
	{
		while (start <= (len - 1))
		{
			sub[i++] = s[start + 1];
			start++;
		}
	}
	return (sub);
}
