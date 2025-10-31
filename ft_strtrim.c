/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gtourdia <@student.42mulhouse.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/30 18:09:50 by gtourdia          #+#    #+#             */
/*   Updated: 2025/10/30 18:46:53 by gtourdia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	append_char(char *str, char c)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	str[i] = c;
	str[i + 1] = '\0';
}

static int	get_len(const char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft_strtrim(char const *s1, char const *s2)
{
	int		i;
	int		subi;
	char	*new_str;
	int		bool_copy;

	new_str = malloc(sizeof(char) * get_len(s1));
	new_str[0] = '\0';
	i = 0;
	subi = 0;
	while (s1[i] && new_str != NULL)
	{
		bool_copy = 1;
		while (s2[subi])
		{
			if (s1[i] == s2[subi])
				bool_copy = 0;
			subi++;
		}
		if (bool_copy)
			append_char(new_str, s1[i]);
		i++;
		subi = 0;
	}
	return (new_str);
}
