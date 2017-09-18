/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnevhuta <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/20 10:13:52 by pnevhuta          #+#    #+#             */
/*   Updated: 2017/07/27 11:15:46 by pnevhuta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int			ft_isspace(int s)
{
	if ((s >= '\t' && s <= '\r') || (s == ' '))
		return (1);
	return (0);
}

int					ft_atoi(const char *str)
{
	long			result;
	int				chrsgn;
	int				i;

	i = 0;
	while (ft_isspace(str[i]) == 1)
		i++;
	if (str[i] == '-')
		chrsgn = -1;
	else
		chrsgn = 1;
	if (str[i] == '+' || str[i] == '-')
		i++;
	result = 0;
	while (str[i] != '\0' && str[i] >= '0' && str[i] <= '9')
	{
		result = result * 10 + str[i] - '0';
		i++;
	}
	result = result * chrsgn;
	return (result);
}
