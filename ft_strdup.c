/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gtourdia <@student.42mulhouse.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/30 17:33:42 by gtourdia          #+#    #+#             */
/*   Updated: 2025/10/30 18:26:56 by gtourdia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	size_t	strlen;
	char	*new_str;
	size_t	i;

	i = 0;
	strlen = ft_strlen(s);
	new_str = malloc(sizeof(char) * strlen);
	while (i < strlen && new_str != NULL)
	{
		new_str[i] = s[i];
		i++;
	}
	return (new_str);
}