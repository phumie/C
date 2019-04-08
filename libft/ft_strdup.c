/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnevhuta <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/19 16:59:01 by pnevhuta          #+#    #+#             */
/*   Updated: 2017/08/17 13:02:11 by pnevhuta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *sc)
{
	size_t	i;
	char	*str;

	i = 0;
	if (!(str = (char*)malloc(sizeof(*str) * (ft_strlen(sc) + 1))))
		return (NULL);
	while (i < ft_strlen(sc))
	{
		str[i] = sc[i];
		i++;
	}
	str[i] = '\0';
	return (str);
}
