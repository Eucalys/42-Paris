/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   minitalk.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cnguyen <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/25 12:07:07 by cnguyen           #+#    #+#             */
/*   Updated: 2022/01/25 13:30:55 by cnguyen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef
# define

#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <signal.h>

int	kill(pid t pid, int signal);
int	pause(void);
int	sleep(usigned int seconds);

int	sigaction(int signum, const struct sigaction *act, struct sigaction *oldact);

struct	sigaction {
	void		(*sa_handler) (int);
	void		(*sa_sigaction) (int, siginfo_t *, void *);
	sigset_t	sa_mask;
	int		sa_flags;
	void		(*sa_restorer) (void);
};

#endif
