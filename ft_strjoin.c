/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gtourdia <@student.42mulhouse.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/30 17:52:39 by gtourdia          #+#    #+#             */
/*   Updated: 2025/10/31 15:34:50 by gtourdia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

static size_t	ft_strlen(const char *s)
{
	size_t	i;

	i = 0;
	while (s[i])
		i++;
	return (i);
}

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	len;
	char	*new_str;
	size_t	i;
	size_t	nstr_i;
	
	len = ft_strlen(s1) + ft_strlen(s2);
	new_str = malloc(sizeof(char) * len);
	if (new_str == NULL)
		return (NULL);
	i = 0;
	nstr_i = 0;
	while (s1[nstr_i])
	{
		new_str[nstr_i] = s1[nstr_i];
		nstr_i++;
	}
	i = 0;
	while (s2[i])
	{
		new_str[nstr_i] = s2[i];
		i++;
		nstr_i++;
	}
	new_str[nstr_i] = '\0';
	return (new_str);
}
