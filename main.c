#include <ctype.h>
#include <string.h>
#include <stdio.h>
#include "libft.h"

int	main()
{
	unsigned char c = 55;
	const char s[] = "Salut, ceci est une phrase d'exemple.";
	char *to_fill = malloc(sizeof(char) * 6);
	to_fill[5] = '\0';
	printf("----- IsAlpha -----\n");
	printf("Le char %c est : %d\n", c, isalpha(c));
	printf("Le char %c est : %d\n", c, ft_isalpha(c));
	printf("----- IsDigit -----\n");
	printf("Le char %c est : %d\n", c, isdigit(c));
	printf("Le char %c est : %d\n", c, ft_isdigit(c));
	printf("----- IsAlnum -----\n");
	printf("Le char %c est : %d\n", c, isalnum(c));
	printf("Le char %c est : %d\n", c, ft_isalnum(c));
	printf("----- IsAscii -----\n");
	printf("Le char %c est : %d\n", c, isascii(c));
	printf("Le char %c est : %d\n", c, ft_isascii(c));
	printf("----- IsPrint -----\n");
	printf("Le char %c est : %d\n", c, isprint(c));
	printf("Le char %c est : %d\n", c, ft_isprint(c));
	printf("----- strlen -----\n");
	printf("String de longueur %lu\n", strlen(s));
	printf("String de longueur %lu\n", ft_strlen(s));
	printf("----- memset -----\n");
	// memset(to_fill, '0', 5);
	ft_memset(to_fill, '0', 5);
	printf("String filled %s\n", to_fill);
	printf("----- bzero -----\n");
	printf("Nothing to see here\n");
	
}