/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gtourdia <@student.42mulhouse.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/28 09:26:23 by gtourdia          #+#    #+#             */
/*   Updated: 2025/10/29 10:10:14 by gtourdia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t		i;
	char		*c_dest;
	const char	*c_src;

	i = 0;
	c_dest = dest;
	c_src = src;
	if (dest < src)
	{
		while (i <= n)
		{
			c_dest[n - i] = c_src[n - i];
			i++;
		}
	}
	else
	{
		while (i <= n)
		{
			c_dest[i] = c_src[i];
			i++;
		}
	}
	return (dest);
}
