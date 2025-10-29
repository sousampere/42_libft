#include <ctype.h>
#include <string.h>
#include <stdio.h>
#include "libft.h"

int	main(void)
{
	char	dest[] = "Enchante";
	char	src[] = "Laurent";
	size_t val = ft_strlcat(dest, src, 1);
	printf("%s\n%zu\n", dest, val);
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
// V strlcpy
		// char	dest[] = "Enchante";
		// char	src[] = "Laurent";

		// size_t val = ft_strlcpy(dest, src, 60);
		// printf("%s\n%zu\n", dest, val);
// V strlcat