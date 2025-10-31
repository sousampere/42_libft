/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gtourdia <@student.42mulhouse.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/29 14:26:45 by gtourdia          #+#    #+#             */
/*   Updated: 2025/10/31 16:22:00 by gtourdia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t	i;
	void	*result;

	i = 0;
	while (i < n)
	{
		if (((char *)s)[i] == (char) c)
		{
			result = (void *) &s[i];
			return (result);
		}
		i++;
	}
	return (NULL);
}
