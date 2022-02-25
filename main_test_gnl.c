/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_test.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cnguyen <cnguyen@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/19 13:49:38 by cnguyen           #+#    #+#             */
/*   Updated: 2022/02/25 01:20:41 by cnguyen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"
#include <sys/stat.h>
#include <fcntl.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int	main(int argc, char **av)
{
	char	*line;
	int		file;
	int		res;

	if (argc > 1)
		file = open(av[1], O_RDONLY);
	res = 1;
	while (res > 0)
	{
		line = get_next_line(file);
		if (line)
		{
			printf("%s", line);
			free(line);
		}
		else
		{
			printf("-\nNO MORE - THE END");
			return (0);
		}
	}
	system("leaks a.out");
	return (0);
}
