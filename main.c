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

char *
strdup(const char *str)
{
	size_t siz;
	char *copy;
	siz = strlen(str) + 1;
	if ((copy = malloc(siz)) == NULL)
		return(NULL);
	(void)memcpy(copy, str, siz);
	return(copy);
}

int	main(void)
{
	// // ----- ft_atoi
	// char	nptr[] = "84590";
	// char	nptr2[] = "+845a90";
	// char	nptr3[] = "dd845a90";
	// char	nptr4[] = "-845a90";
	// char	nptr5[] = "-845a90";
	// char	nptr6[] = "--845a90";
	// char	nptr7[] = "-2147483648";
	// char	nptr8[] = "2147483647";
	// printf("Original ->\t%d\nCreated  ->\t%d\n", atoi(nptr), ft_atoi(nptr));
	// printf("Original ->\t%d\nCreated  ->\t%d\n", atoi(nptr2), ft_atoi(nptr2));
	// printf("Original ->\t%d\nCreated  ->\t%d\n", atoi(nptr3), ft_atoi(nptr3));
	// printf("Original ->\t%d\nCreated  ->\t%d\n", atoi(nptr4), ft_atoi(nptr4));
	// printf("Original ->\t%d\nCreated  ->\t%d\n", atoi(nptr5), ft_atoi(nptr5));
	// printf("Original ->\t%d\nCreated  ->\t%d\n", atoi(nptr6), ft_atoi(nptr6));
	// printf("Original ->\t%d\nCreated  ->\t%d\n", atoi(nptr7), ft_atoi(nptr7));
	// printf("Original ->\t%d\nCreated  ->\t%d\n", atoi(nptr8), ft_atoi(nptr8));
	// // ----- ft_bzero
	// // char	*bzerostr = malloc(sizeof(char) * 10);
	// // char	*bzerostr2 = malloc(sizeof(char) * 10);
	// // ft_bzero(bzerostr, 10);
	// // __bzero(bzerostr2, 10);
	// // printf("Bzero %s\n", bzerostr2);
	// // ----- ft_itoa
	// int	vitoa = -2147483648;
	// printf("Original ->\t(No function)\nCreated  ->\t%s\n", ft_itoa(vitoa));
	// // ----- ft_memchr
	// char	strmemchr[] = "La quete de vengence ne m'interesse pas. - Evil Gaspard";
	// printf("Original ->\t%s\nCreated  ->\t%s\n", (char *) memchr(strmemchr, '\t', 10), (char *) ft_memchr(strmemchr, '\t', 10));
	// int	tabsize = 8;
	// int	*tab = malloc (sizeof(int) * tabsize);
	// int i = 0;
	// while (i < tabsize)
	// {
	// 	tab[i] = i;
	// 	i++;
	// }
	// printf("Original ->\t%d\nCreated  ->\t%d\n", *(int *) memchr(tab, 5, sizeof(int) * 10), *(int *) ft_memchr(tab, 5, sizeof(int) * 10));
	// // ----- ft_memcmp
	// tabsize = 8;
	// int	*tabcmp = malloc (sizeof(int) * tabsize);
	// i = 0;
	// while (i < tabsize)
	// {
	// 	if (i != 5)
	// 		tabcmp[i] = i;
	// 	else
	// 		tabcmp[i] = 20;
	// 	i++;
	// }
	// int	sizecmp = 6;
	// printf("Original ->\t%d\nCreated  ->\t%d\n", memcmp(tab, tabcmp, sizeof(int) * sizecmp), ft_memcmp(tab, tabcmp, sizeof(int) * sizecmp));
	// // ----- ft_memcpy
	// char	strcpy[] = "Salut a toi";
	// size_t	lencpy = 1000;
	// char	*destcpy = malloc(sizeof(char) * strlen(strcpy));
	// printf("Original ->\t%s\nCreated  ->\t%s\n", (char *) memcpy(destcpy, strcpy, sizeof(char) * lencpy), (char *) ft_memcpy(destcpy, strcpy, sizeof(char) * lencpy));
	// // ----- ft_memmove
	// int	movelen = 5;
	// char	move1[] = "Salutations, Laurent !";
	// ft_memmove(move1, move1+6, movelen);
	// char	move2[] = "Salutations, Laurent !";
	// memmove(move2, move2+6, movelen);
	// printf("Original : %s\n", move2);
	// printf("Created  : %s\n", move1);
	// // ----- ft_memset
	// char	memset1[] = "Bonjour !";
	// char	memset2[] = "Bonjour !";
	// size_t memsetlen = 5;
	// printf("Original ->\t%s\nCreated  ->\t%s\n", (char *) memset(memset1, 'X', memsetlen), (char *) ft_memset(memset2, 'X', memsetlen));
	// // ----- ft_strchr
	// char	strstrchr[] = "Salut Lucas";
	// char	c = 'L';
	// printf("Original ->\t%s\nCreated  ->\t%s\n", strchr(strstrchr, c), ft_strchr(strstrchr, c));
	// // ----- ft_strdup
	char	strstrdup[] = "Salut Lucas";
	printf("Original ->\t%s\nCreated  ->\t%s\n", strdup(strstrdup), ft_strdup(strstrdup));
	// // ----- ft_strjoin
	char	join1[] = "Hallo ";
	char	join2[] = "Welt";
	printf("Original ->\t%s\nCreated  ->\t%s\n", "(no ft)", ft_strjoin(join1, join2));
	// // ----- ft_strlcat
	size_t	catsize = -5;
	char	lcat1[] = "Catfwef";
	char	lcat2[] = "me :)eq";
	size_t	cat1 = strlcat(lcat1, lcat2, catsize);
	printf("Result ->\t%zu %s\n", cat1, lcat1);
	// // ----- ft_split
	char	splitme[] = "hFait putchar";
	char	c = 'h';
	printf("Split original : %s\nSplit created : %s\n", ft_split(splitme, c)[0], ft_split(splitme, c)[0]);
	// // ----- ft_strlcpy
	char	*cpysrc = "Copy copy";
	char	*cpydst = malloc(sizeof(char) * ft_strlen(cpysrc));
	size_t	lcpyvalue = ft_strlcpy(cpydst, cpysrc, 100);
	printf("lcpy : %zu %s\n", lcpyvalue, cpydst);
	// ----- ft_strtrim
	printf("%lu\n", ft_strlen("salt"));
	printf("%s\n", ft_strtrim("aaaaabaMangez-bougez.fraaaccc", "abc"));
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