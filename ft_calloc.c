/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gtourdia <@student.42mulhouse.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/30 17:22:39 by gtourdia          #+#    #+#             */
/*   Updated: 2025/10/31 11:53:19 by gtourdia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*alloc;
	size_t	i;
	char	*c_alloc;

	if (nmemb == 0 || size == 0)
	{
		alloc = malloc(1);
		return (alloc);
	}
	i = 0;
	alloc = malloc(nmemb * size);
	if (alloc != NULL)
	{
		c_alloc = (char *) alloc;
		while (i < nmemb * size)
		{
			c_alloc[i] = 0;
			i++;
		}
	}
	return (alloc);
}
