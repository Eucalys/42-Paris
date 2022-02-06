/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cnguyen <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/26 16:49:23 by cnguyen           #+#    #+#             */
/*   Updated: 2021/11/26 16:52:48 by cnguyen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

static int ft_strlen(char const *s)
{
	int i;

	i = 0;
	if (s)
		while (s[i])
			i++;
	return (i);
}

void ft_putendl_fd(char const *s)
{
	write(fd, s, ft_strlen(s));
	write(fd, "\n", 1);
}

----------------------------------------------------------------

void	ft_putendl_fd(char *s, int fd)
{
	size_t i;

	if (!s)
		return;
	i = 0;
	while (s[i] != '\0')
	{
		ft_putchar_fd(s[i], fd);
		i++;
	}
	ft_putchar_fd('\n', fd);
}