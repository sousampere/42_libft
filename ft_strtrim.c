/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gtourdia <@student.42mulhouse.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/30 18:09:50 by gtourdia          #+#    #+#             */
/*   Updated: 2025/11/06 22:05:54 by gtourdia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	is_in_set(char c, const char *set)
{
	size_t	i;

	i = 0;
	while (set[i])
	{
		if (set[i] == c)
			return (1);
		i++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	int	i;
	size_t	len;
	size_t	stri;
	char	*string;

	i = 0;
	len = 0;
	if (s1 == NULL || set == NULL)
		return (NULL);
	while (s1[i++])
		len += !(is_in_set(s1[i], set));
	if (!(string = malloc(sizeof(char) * (len + 1))))
		return (NULL);
	i = 0;
	stri = 0;
	while (stri < len)
	{
		if (!is_in_set(s1[i], set))
			string[stri++] = s1[i];
		i++;
	}
	string[stri] = '\0';
	return (string);
}

// #include <stdlib.h>
// #include <string.h>
// int main() {
//     char *s1 = "Hello World";
//     char *set = "l";
//     char *result = ft_strtrim(s1, set);

//     if (result == NULL) return 1;
//     if (strcmp(result, "  Hello World  ") != 0) {
//         free(result);
//         return 1;
//     }

//     free(result);
//     return 0;
// }