/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gtourdia <@student.42mulhouse.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/30 10:29:14 by gtourdia          #+#    #+#             */
/*   Updated: 2025/10/30 16:55:40 by gtourdia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t	i;
	char	*c_s1;
	char	*c_s2;

	i = 0;
	c_s1 = (char *) s1;
	c_s2 = (char *) s2;
	if (n == 0)
		return (0);
	while (i < n)
	{
		if (c_s1[i] != c_s2[i])
			return ((char) c_s1[i] - (char) c_s2[i]);
		i++;
	}
	return (0);
}