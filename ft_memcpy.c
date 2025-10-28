/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gtourdia <@student.42mulhouse.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/27 17:25:37 by gtourdia          #+#    #+#             */
/*   Updated: 2025/10/27 20:08:08 by gtourdia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

void*	ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t		i;
	long long	*new_dest;

	i = 0;
	while (i < n)
	{
		new_dest[i] = src[n];
		i++;
	}
}