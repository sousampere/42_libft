/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gtourdia <@student.42mulhouse.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/30 18:47:30 by gtourdia          #+#    #+#             */
/*   Updated: 2025/10/30 20:44:35 by gtourdia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	get_num_tabs(char const *s, char c)
{
	int	i;
	int	tabs;

	i = 0;
	tabs = 0;
	if (s[0] != c)
		tabs++;
	while (s[i])
	{
		if (s[i] != c && s[i] != '\0')
		{
			if (s[i - 1] == c)
				tabs++;
		}
		i++;
	}
	return (tabs);
}

static char	*get_new_str(const char *s, char c)
{
	int		len;
	int		i;
	char	*new_str;

	len = 0;
	while (s[len] != c)
		len++;
	new_str = malloc(sizeof(char) * len);
	i = 0;
	while (i < len)
	{
		new_str[i] = s[i];
		i++;
	}
	new_str[i] = '\0';
	return (new_str);
}

char	**ft_split(char const *s, char c)
{
	char	**strings;
	int		num_of_tabs;
	int		i;
	int		tabsi;

	i = 0;
	num_of_tabs = get_num_tabs(s, c);
	strings = malloc(sizeof(char *) * num_of_tabs);
	tabsi = 0;
	while (s[i])
	{
		while (s[i] == c)
			i++;
		if (s[i] != c && s[i] != '\0')
		{
			strings[tabsi] = get_new_str(&s[i], c);
			tabsi++;
		}
		while (s[i] != c && s[i] != '\0')
			i++;
	}
	return (strings);
}
