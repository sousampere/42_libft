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
	return (size + ft_strlen(src));
}












size_t	strlcat(char *dst, const char *src, size_t siz)
{
	char *d = dst;
	const char *s = src;
	size_t n = siz;
	size_t dlen;
	/* Find the end of dst and adjust bytes left but don't go past end */
	while (n-- != 0 && *d != '\0')
		d++;
	dlen = d - dst;
	n = siz - dlen;
	if (n == 0)
		return(dlen + ft_strlen(s));
	while (*s != '\0') {
		if (n != 1) {
			*d++ = *s;
			n--;
		}
		s++;
	}
	*d = '\0';
	return(dlen + (s - src));	/* count does not include NUL */
}