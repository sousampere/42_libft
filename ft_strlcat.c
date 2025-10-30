// /* ************************************************************************** */
// /*                                                                            */
// /*                                                        :::      ::::::::   */
// /*   ft_strlcat.c                                       :+:      :+:    :+:   */
// /*                                                    +:+ +:+         +:+     */
// /*   By: gtourdia <@student.42mulhouse.fr>          +#+  +:+       +#+        */
// /*                                                +#+#+#+#+#+   +#+           */
// /*   Created: 2025/10/28 20:40:18 by gtourdia          #+#    #+#             */
// /*   Updated: 2025/10/28 21:27:47 by gtourdia         ###   ########.fr       */
// /*                                                                            */
// /* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	destlen;

	destlen = ft_strlen(dst);
	i = 0;
	if (size == 0)
		return (destlen - 1);
	while (i + destlen < size - 1 && src[i] != '\0')
	{
		dst[i + destlen] = src[i];
		i++;
	}
	if (src[i] == '\0')
	{
		dst[i + destlen] = '\0';
	}
	return (destlen + ft_strlen(src));
}
