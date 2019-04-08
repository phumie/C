/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnevhuta <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/20 10:09:30 by pnevhuta          #+#    #+#             */
/*   Updated: 2017/08/17 11:58:27 by pnevhuta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void				*ft_memccpy(void *dst, void const *src, int c, size_t n)
{
	size_t			i;
	unsigned char	*dst2;
	unsigned char	*src2;

	i = 0;
	dst2 = (unsigned char *)dst;
	src2 = (unsigned char *)src;
	while (i < n)
	{
		dst2[i] = src2[i];
		if (src2[i] == (unsigned char)c)
			return (dst2 + i + 1);
		i++;
	}
	return (NULL);
}
