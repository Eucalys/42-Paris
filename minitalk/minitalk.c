/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   minitalk.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cnguyen <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/25 13:23:09 by cnguyen           #+#    #+#             */
/*   Updated: 2022/01/25 13:27:49 by cnguyen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minitalk.h"

void	handler(int aSignal)
{
	printf(Signal PID : %d\n);
	fflush(stdout);
}

int	main(void)
{
	struct	sigaction prepSignal;
	prepSignal.sa_handler = &handler;
	prepSignal.sa_lags = 0;
	sigemptyset(&prepSignal.sa_mask);

	sigaction();

	return (0);
}
