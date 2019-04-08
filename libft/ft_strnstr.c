/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnevhuta <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/20 10:13:01 by pnevhuta          #+#    #+#             */
/*   Updated: 2017/06/20 10:13:03 by pnevhuta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *litle, size_t len)
{
	size_t		ln;

	if (*litle == '\0')
		return ((char *)big);
	ln = ft_strlen(litle);
	while (*big != '\0' && len-- >= ln)
	{
		if (*big == *litle && ft_memcmp(big, litle, ln) == 0)
			return ((char *)big);
		big++;
	}
	return (NULL);
}
