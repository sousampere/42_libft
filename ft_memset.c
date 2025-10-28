/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gtourdia <@student.42mulhouse.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/27 17:05:24 by gtourdia          #+#    #+#             */
/*   Updated: 2025/10/27 17:12:31 by gtourdia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

void	ft_memset(void *dst, int c, size_t length)
{
	size_t	i;
	char	*char_dest;

	i = 0;
	char_dest = dst;
	while (i < length)
	{
		char_dest[i] = c;
		i++;
	}
}