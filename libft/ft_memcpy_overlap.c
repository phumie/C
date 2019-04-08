/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy_overlap.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnevhuta <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/31 09:43:53 by pnevhuta          #+#    #+#             */
/*   Updated: 2017/08/31 09:43:55 by pnevhuta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy_overlap(void *s1, const void *s2, size_t n)
{
	char		*b1;
	char		*b2;

	if (n == 0 || s1 == s2)
		return (s1);
	b1 = (char *)s1;
	b2 = (char *)s2;
	while (n--)
	{
		b1[n] = b2[n];
	}
	return (s1);
}
