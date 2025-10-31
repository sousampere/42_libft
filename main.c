#include <ctype.h>
// #include <string.h>
#include <stdio.h>
#include "libft.h"
#include <bsd/string.h>
// VERIF STRLCPY STRLCAT

#include <string.h>
/* Set N bytes of S to 0.  */
void __bzero (void *s, size_t len)
{
  memset (s, '\0', len);
}

int	main(void)
{
	// ----- ft_atoi
	char	nptr[] = "84590";
	char	nptr2[] = "+845a90";
	char	nptr3[] = "dd845a90";
	char	nptr4[] = "-845a90";
	char	nptr5[] = "-845a90";
	char	nptr6[] = "--845a90";
	char	nptr7[] = "-2147483648";
	char	nptr8[] = "2147483647";
	printf("Original ->\t%d\nCreated  ->\t%d\n", atoi(nptr), ft_atoi(nptr));
	printf("Original ->\t%d\nCreated  ->\t%d\n", atoi(nptr2), ft_atoi(nptr2));
	printf("Original ->\t%d\nCreated  ->\t%d\n", atoi(nptr3), ft_atoi(nptr3));
	printf("Original ->\t%d\nCreated  ->\t%d\n", atoi(nptr4), ft_atoi(nptr4));
	printf("Original ->\t%d\nCreated  ->\t%d\n", atoi(nptr5), ft_atoi(nptr5));
	printf("Original ->\t%d\nCreated  ->\t%d\n", atoi(nptr6), ft_atoi(nptr6));
	printf("Original ->\t%d\nCreated  ->\t%d\n", atoi(nptr7), ft_atoi(nptr7));
	printf("Original ->\t%d\nCreated  ->\t%d\n", atoi(nptr8), ft_atoi(nptr8));
	// ----- ft_bzero
	// char	*bzerostr = malloc(sizeof(char) * 10);
	// char	*bzerostr2 = malloc(sizeof(char) * 10);
	// ft_bzero(bzerostr, 10);
	// __bzero(bzerostr2, 10);
	// printf("Bzero %s\n", bzerostr2);
	// ----- ft_itoa
	int	vitoa = -2147483648;
	printf("Original ->\t(No function)\nCreated  ->\t%s\n", ft_itoa(vitoa));
	// ----- 
}

// V isalpha
// V isdigit
// V isalnum
// V isascii
// V isprint
// V strlen
// V memset
		// int	tabsize = 8;
		// int	*tab = malloc (sizeof(int) * tabsize);
		// int i = 0;
		// while (i < tabsize)
		// {
		// 	tab[i] = i;
		// 	i++;
		// }
		// ft_memset(tab+2, 6, sizeof(int) * 5);
		// i = 0;
		// while (i < tabsize)
		// {
		// 	printf("%d\n", tab[i]);
		// 	i++;
		// }
// V bzero
// V memcpy
// V memmove
		// int	tabsize = 8;
		// int	*tab = malloc (sizeof(int) * tabsize);
		// int i = 0;
		// while (i < tabsize)
		// {
		// 	tab[i] = i;
		// 	i++;
		// }
		// memmove(tab+2, tab, 5);
		// i = 0;
		// while (i < tabsize)
		// {
		// 	printf("%d", tab[i]);
		// 	i++;
		// }
// strlcpy
		// char	dest[] = "Enchante";
		// char	src[] = "Laurent";

		// size_t val = ft_strlcpy(dest, src, 60);
		// printf("%s\n%zu\n", dest, val);
// strlcat
// V strchr
// V strrchr