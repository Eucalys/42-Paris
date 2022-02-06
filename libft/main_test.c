/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_test.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cnguyen <cnguyen@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/25 12:36:00 by cnguyen           #+#    #+#             */
/*   Updated: 2021/11/28 18:34:08 by cnguyen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>
#include "libft.h"
#include <unistd.h>

/*
int	ft_memcmp(const void *s1, const void *s2, size_t n);

int		main()
{
	char	str1[15];
	char	str2[15];
	char	str3[15];
	char	str4[15];
	int		ret;

	memcpy(str1, "abcdef", 6);
	memcpy(str2, "ABCDEF", 6);
	memcpy(str3, "123456", 6);
	memcpy(str4, "123456", 6);

	ret = memcmp(str3, str3, 5);

	if (ret > 0)
		printf("str2 is less than str1\n");
	else if (ret < 0)
		printf("str1 is less than str2\n");
	else
		printf("str1 is equale to str2\n");

	ret = ft_memcmp(str3, str2, 5);

	if (ret > 0)
		printf("str2 is less than str1\n");
	else if (ret < 0)
		printf("str1 is less than str2\n");
	else
		printf("str1 is equale to str2\n");

	return (0);
}
*/

/*
void	*ft_memchr(const void *s, int c, size_t n);

int	main () 
{
	const char str[] = "http://www.tutorialspoint.com";
	const char ch = '.';
	char *ret;

	ret = memchr(str, ch, strlen(str));
	printf("String after |%c| is - |%s|\n", ch, ret);

	const char str2[] = "Make it happen. Make it happen twice";
	const char ch2 = '.';
	char *ret2;
	ret2 = ft_memchr(str2, ch2, strlen(str2));
	printf("string apres |%c| est |%s|\n", ch, ret2);
	return(0);
}
*/
/*
void	*ft_memmove(void *dst, const void *src, size_t n);

int main()
{
	char dest[] = "oldstring";
	const char src[]  = "newstring";
	const char src2[] = "neweststring";

	printf("Before memmove dest = %s, src = %s\n", dest, src);
	memmove(dest, src, 9);
	printf("After memmove dest = %s, src = %s\n", dest, src);
	ft_memmove(dest, src2, 9);
	printf("After memmove dest = %s, src2 = %s\n", dest, src);
	return(0);
}
*/
/*
void	*ft_memcpy(void *dest, const void *src, size_t n);

int main () 
{
   const char src[50] = "http://www.tutorialspoint.com";
   char dest[50];

   strcpy(dest,"Heloooo!!");
   printf("Before memcpy dest = %s\n", dest);
   memcpy(dest, src, strlen(src)+1);
   printf("After memcpy dest = %s\n", dest);
   ft_memcpy(dest, src, strlen(src)+1); 
   printf("After ft_memcpy dest = %s\n", dest);
   return(0);
   }*/

/*
void	*ft_memset(void *str, int c, size_t n);

int	main()
{
	char str[50];

	strcpy(str, "This is tring.h library function.");
	puts(str);

	ft_memset(str, '0', 7);
	puts(str);

	memset(str, '0', 7);
	puts(str);
	
	return (0);
}
*/