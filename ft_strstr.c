/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnevhuta <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/20 10:07:13 by pnevhuta          #+#    #+#             */
/*   Updated: 2017/06/20 10:07:15 by pnevhuta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(const char *big, const char *little)
{
	int i;
	int matches;

	i = 0;
	if (little[0] == '\0')
		return ((char *)big);
	while (big[i] != '\0')
	{
		matches = 0;
		while (little[matches] == big[i + matches] && little[matches] != '\0')
			matches++;
		if (little[matches] == '\0')
			return ((char *)(big + i));
		i++;
	}
	return (NULL);
}
