/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gtourdia <@student.42mulhouse.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/30 16:56:58 by gtourdia          #+#    #+#             */
/*   Updated: 2025/10/30 17:10:59 by gtourdia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	little_i;
	char	*c_big;
	char	*c_little;

	i = 0;
	little_i = 0;
	c_big = (char *) big;
	c_little = (char *) little;
	if (little[0] == '\0')
		return (c_big);
	while (i < len)
	{
		while (c_big[i] == c_little[little_i])
		{
			little_i++;
			i++;
			if (little[little_i] == '\0')
				return (c_big + (i - little_i));
		}
		little_i = 0;
		i++;
	}
	return (NULL);
}
