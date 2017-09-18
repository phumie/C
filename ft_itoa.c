/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnevhuta <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/30 15:17:52 by pnevhuta          #+#    #+#             */
/*   Updated: 2017/08/30 15:31:02 by pnevhuta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_itoa(int n)
{
	char	*str;
	int		n_holder;
	size_t	len;
	int		sign;

	len = 2 + (n < 0);
	sign = (n < 0) ? -1 : 1;
	n_holder = n;
	while (n /= 10)
		len++;
	n = n_holder;
	if (!(str = (char *)malloc(sizeof(char) * len--)))
		return (NULL);
	str[len--] = '\0';
	str[len--] = sign * (n % 10) + '0';
	while (n /= 10)
	{
		str[len--] = sign * (n % 10) + '0';
	}
	(sign < 0) ? str[len] = '-' : 0;
	return (str);
}
