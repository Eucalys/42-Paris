/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cnguyen <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/02 15:53:22 by cnguyen           #+#    #+#             */
/*   Updated: 2021/12/02 17:58:36 by cnguyen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
#include <unistd.h>
#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include <bsd/string.h>

int	main()
{
	char const *s1;
	char const *s2;
	
	*s1 = "Part 1, ";
	*s2 = "Part 2.";
	printf("%s\n",ft_strjoin(s1, s2));
	return (0);
}

/*
int	main()
{
	printf("%s", ft_substr("Ligne de test Commence ici et finit la.", 13, 42));
	return (0);
}*/

/*
int	main()
{
	int r;
	int size = 42;
	char buffer[size];

	ft_strlcpy(buffer, "This is ", size);
	r = ft_strlcat(buffer, "a potentially long string", size);
	puts(buffer);
	printf("%d\n", r);
	return (0);
}
*/
/*
int     main()
{
        printf("%s", ft_substr("Working in 42 is what student do.", 11, 14));
	printf("%d", substr("Working in 42 is what student do.", 11, 14));
	return (0);
}*/
