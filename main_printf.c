#include <stdio.h>
#include <limits.h>
#include "ft_printf.h"

#define TEST "Hello World ! %chis %sme. L%uf%x sh%iuld %d%X fun for %Xv%xryone !%% %p", 'T', "is ", 1, 14, 0, 8, 14, 14, 14, &main

int	main(void)
{
	int	ret;
	int	ft_ret;

	printf("   printf[");
	ret = printf(TEST);
	printf("] = %i\n", ret);
	printf("ft_printf[");
	fflush(stdout);
	ft_ret = ft_printf(TEST);
	printf("] = %i\n", ft_ret);
	return (EXIT_SUCCESS);
}
