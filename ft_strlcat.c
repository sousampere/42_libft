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

// #include "libft.h"

// size_t	ft_strlcat(char *dst, const char *src, size_t size)
// {
// /*
//  * Appends src to string dst of size siz (unlike strncat, siz is the
//  * full size of dst, not space left).  At most siz-1 characters
//  * will be copied.  Always NUL terminates (unless siz <= strlen(dst)).
//  * Returns strlen(src) + MIN(siz, strlen(initial dst)).
//  * If retval >= siz, truncation occurred.
//  */
	
// }

// size_t	strlcat(char *dst, const char *src, size_t siz)
// {
// 	char *d = dst;
// 	const char *s = src;
// 	size_t n = siz;
// 	size_t dlen;
// 	/* Find the end of dst and adjust bytes left but don't go past end */
// 	while (n-- != 0 && *d != '\0')
// 		d++;
// 	dlen = d - dst;
// 	n = siz - dlen;
// 	if (n == 0)
// 		return(dlen + ft_strlen(s));
// 	while (*s != '\0') {
// 		if (n != 1) {
// 			*d++ = *s;
// 			n--;
// 		}
// 		s++;
// 	}
// 	*d = '\0';
// 	return(dlen + (s - src));	/* count does not include NUL */
// }