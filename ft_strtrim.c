/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gtourdia <@student.42mulhouse.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/30 18:09:50 by gtourdia          #+#    #+#             */
/*   Updated: 2025/11/04 14:30:31 by gtourdia         ###   ########.fr       */
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
	while (s1[i])
	{
		len += !(is_in_set(s1[i], set));
		i++;
	}
	string = malloc(sizeof(char) * (len + 1));
	i = 0;
	stri = 0;
	while (stri < len)
	{
		if (!is_in_set(s1[i], set))
		{
			string[stri] = s1[i];
			stri++;
		}
		i++;
	}
	string[stri] = '\0';
	return (string);
}

// #include <stdio.h>
// int main()
// {
// 	char * s = ft_strtrim("   xxxtripouille", " x");
// 	printf("%s\n", s);
// }