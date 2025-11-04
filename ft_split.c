/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gtourdia <@student.42mulhouse.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/30 18:47:30 by gtourdia          #+#    #+#             */
/*   Updated: 2025/11/04 22:35:11 by gtourdia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	get_len(char const *s, char c)
{
	size_t	len;

	len = 0;
	while (s[len] != c && s[len])
		len++;
	return (len);
}

static char	*get_string(char const *s, char c)
{
	size_t	len;
	size_t	i;
	char	*str;

	i = 0;
	len = 0;
	while (s[len] != c && s[len])
		len++;
	str = ft_calloc(sizeof(char) * (len + 1));
	if (!str)
		return (NULL);
	while (s[i] != c && s[i])
	{
		str[i] = s[i];
		i++;
	}
	str[i] = '\0';
	return (str);
}

// static char	**free_all(char **strings, size_t strings_number)
// {
// 	size_t	i;

// 	i = 0;
// 	while (i < strings_number)
// 	{
// 		free(strings[i]);
// 		i++;
// 	}
// 	free(strings);
// 	return (NULL);
// }

char	**ft_split(char const *s, char c)
{
	size_t	i;
	size_t	strings_i;
	char	**strings;

	strings = ft_calloc(sizeof(char *) * ft_strlen(s));
	if (!strings)
		return (NULL);
	i = 0;
	strings_i = 0;
	while (s[i])
	{
		while (s[i] == c && s[i])
			i++;
		if (s[i])
			strings[strings_i] = get_string(&s[i], c);
			// if (!strings[strings_i])
			// 	return (free_all(strings, strings_i));
			i += get_len(&s[i], c);
			strings_i++;
	}
	return (strings);
}

// #include <stdio.h>

// int main ()
// {
// 	char	**strings = ft_split("  tripouille  42  ", ' ');
// 	printf("%s\n", strings[0]);
// }