/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gtourdia <@student.42mulhouse.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/30 18:47:30 by gtourdia          #+#    #+#             */
/*   Updated: 2025/11/04 17:49:20 by gtourdia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include "libft.h"
// 						#include <stdio.h>


// static size_t	get_num_of_strings(char const *s, char c)
// {
// 	size_t	i;
// 	size_t	num_of_string;

// 	i = 0;
// 	num_of_string = 0;
// 	while (s[i])
// 	{
// 		if (s[i] != c && (s[i + 1] == c || s[i + 1] == '\0'))
// 			num_of_string++;
// 		i++;
// 	}
// 	return (num_of_string);
// }

// static size_t	splitlen(const char *s, char c)
// {
// 	size_t	i;

// 	while (s[i] && s[i] != c)
// 		i++;
// 	return (i);
// }

// static size_t	splitlen(const char *s, char c)
// {
// 	size_t	i;

// 	while (s[i] && s[i] != c)
// 		i++;
// 	return (i);
// }
						
// char	**ft_split(char const *s, char c)
// {
// 	size_t	num_of_string;
// 	size_t	i;
// 	size_t	mallocs;
// 	char	**strings;

// 	num_of_string = get_num_of_strings(s, c);
// 	strings = malloc(sizeof(char *) * num_of_string);
// 	if (!strings)
// 		return (NULL);
// 	mallocs = 0;
// 	while (s[i])
// 	{
// 		if (s[i] != c)
// 		{
// 			strings[mallocs] = malloc(sizeof(char) * splitlen(&s[i], c));
// 			if (!strings[])
// 			// FREE ALL
// 		}
// 		i++;
// 	}
// }





// #include <stdio.h>

// int main ()
// {
// 	size_t n = get_num_of_strings("36  tri pouille  42  66", ' ');
// 	printf("%zu\n", n);
// }