/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gtourdia <@student.42mulhouse.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/31 11:09:57 by gtourdia          #+#    #+#             */
/*   Updated: 2025/11/01 16:35:31 by gtourdia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	sign_check(int *sign, int *n)
{
	if (*n < 0)
	{
		*sign = -1;
		*n *= -1;
	}
}

char	*ft_itoa(int n)
{
	char	*result;
	int		sign;
	int		rev_i;

	if (n == -2147483648)
		return ("-2147483648");
	result = malloc(sizeof(char) * 12);
	if (result == NULL)
		return (result);
	sign = 1;
	rev_i = 11;
	sign_check(&sign, &n);
	result[rev_i] = '\0';
	while (n > 0)
	{
		rev_i--;
		result[rev_i] = n % 10 + '0';
		n /= 10;
	}
	if (sign == -1)
	{
		rev_i--;
		result[rev_i] = '-';
	}
	return (&result[rev_i]);
}
