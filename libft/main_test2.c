/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_test2.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cnguyen <cnguyen@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/26 14:37:54 by cnguyen           #+#    #+#             */
/*   Updated: 2021/11/29 12:50:50 by cnguyen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <string.h>
#include "libft.h"
#include <ctype.h>

/*
void	*ft_calloc(size_t count, size_t size);

int	main()
{
	char	str[] = "11111111";
	printf("%s\n", str);
	ft_calloc(3, 12);
	printf("%s\n", str);
	calloc(3, 12);
	printf("%s", str);
	return (0);
}
*/
/*
void	ft_bzero(void *s, size_t n);

int	main()
{
	char	str[] = "11111111";
	printf("%s\n", str);
	ft_bzero(str, 6);
	printf("%s", str);
	bzero(str, 6);
	printf("%s", str);
	return (0);
}*/

/*
int	ft_atoi(const char *str);

int	main()
{
	printf("%i\n", ft_atoi("1abc"));
	printf("%i\n", atoi("1abc"));
	printf("%i\n", ft_atoi("42"));
	printf("%i\n", atoi("42"));
	printf("%i\n", ft_atoi("-25"));
	printf("%i\n", atoi("-25"));
	printf("%i\n", ft_atoi("abc0"));
	printf("%i\n", atoi("abc0"));
	return (0);
}*/

/*int main () 
{
   int len;
   const char str[] = "Make the wolrd stop, and make it turn.";
   const char ch = 'a';
   char *ret;

   ret = strrchr(str, ch);

   printf("String after |%c| is - |%s|\n", ch, ret);
   
   return(0);
}*/

/*
int main () 
{
   int i = 0;
   char c;
   char str[] = "ABCDEFGHIJKLM";
   char str2[] = "abcdefghijklm";
	
   while( str[i] ) 
   {
      putchar(ft_tolower(str[i]));
	  putchar(ft_toupper(str2[i]));
      i++;
   }
   
   return(0);
}*/

/*
char *ft_strchr(const char *str, int c);

int	main()
{
	printf("%s\n", strchr("Lets get this string", 'e'));
	printf("%s\n", ft_strchr("Lets get this string", 'e'));

	return (0);
}*/


/*
void	ft_putnbr_fd(int n, int fd);

int	main()
{
	ft_putnbr_fd(42,1);
	return (0);
}
*/


char *ft_strnstr(const char *str, const char *to_find, size_t n);

int	main()
{
	char s1[] = "The world is in perpetual movement, none can stop the change";
	char s2[] = "The movement of the earth is rotation and circles.";
	const char *s3 = "Foo Bar Baz";
	const char *s4 = "Bar";

	printf("String1 : %s\n", strnstr(s3, "Bar", 12));
	printf("String1 : %s\n", ft_strnstr(s3, "Bar", 12));
	printf("String2 : %s\n", strnstr(s4, "Bar", 4));
	printf("String2 : %s\n", ft_strnstr(s4, "Bar", 4));
	printf("String1 : %s\n", strnstr(s3, "Bar", 4));
	printf("String1 : %s\n", ft_strnstr(s3, "Bar", 4));
	printf("String2 : %s\n", strnstr(s4, "", 4));
	printf("String2 : %s\n", ft_strnstr(s4, "", 4));
	return (0);
}
