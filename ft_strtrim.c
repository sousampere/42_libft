/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gtourdia <@student.42mulhouse.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/30 18:09:50 by gtourdia          #+#    #+#             */
/*   Updated: 2025/11/01 16:21:58 by gtourdia         ###   ########.fr       */
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

static int	check_following(char const *s1, char const *set)
{
	size_t	i;

	i = 0;
	while (s1[i])
	{
		if (!is_in_set(s1[i], set))
			return (0);
		i++;
	}
	return (1);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	i;
	char	*result;

	while (is_in_set(*s1, set))
		s1++;
	i = 0;
	result = malloc(sizeof(char) * (ft_strlen(s1)));
	while (!check_following(&s1[i], set) && s1[i] && result != NULL)
	{
		result[i] = s1[i];
		i++;
	}
	return (result);
}
