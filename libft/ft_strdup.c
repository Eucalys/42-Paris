/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cnguyen <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/24 09:03:34 by cnguyen           #+#    #+#             */
/*   Updated: 2021/12/02 17:26:02 by cnguyen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

static char	*ft_strcpy(char *dest, char *scr)
{
	int	i;

	i = 0;
	while (scr[i])
	{
		dest[i] = scr[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

char	*ft_strdup(const char *s)
{
	char	*up;
	int	i;

	i = 0;
	if (s != '\0')
		up = malloc((ft_strlen((char *)s) + 1) * sizeof(char));
	if (!up)
		return (NULL);
	if (up)
		ft_strcpy(up, (char *)s);
	return (up);
}
