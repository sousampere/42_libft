/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gtourdia <@student.42mulhouse.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/28 17:39:44 by gtourdia          #+#    #+#             */
/*   Updated: 2025/10/29 10:28:12 by gtourdia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	i;

	if (size > 0)
	{
		i = 0;
		while (i < size - 1 && src[i] != '\0')
		{
			dst[i] = src[i];
			i++;
		}
		dst[i] = '\0';
	}
	i = 0;
	while (src[i])
		i++;
	return (i);
}

// size_t strlcpy(char *dst, const char *src, size_t siz)
// {
//     char       *d = dst;
//     const char *s = src;
//     size_t      n = siz;
 
//     /* Copy as many bytes as will fit */
//     if (n != 0)
//     {
//         while (--n != 0)
//         {
//             if ((*d++ = *s++) == '\0')
//                 break;
//         }
//     }
 
//     /* Not enough room in dst, add NUL and traverse rest of src */
//     if (n == 0)
//     {
//         if (siz != 0)
//             *d = '\0';          /* NUL-terminate dst */
//         while (*s++)
//             ;
//     }
 
//     return (s - src - 1);       /* count does not include NUL */
// }