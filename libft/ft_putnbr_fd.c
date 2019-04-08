/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnevhuta <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/20 10:16:03 by pnevhuta          #+#    #+#             */
/*   Updated: 2017/08/17 12:22:04 by pnevhuta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	long	lngnbr;

	lngnbr = (long)n;
	if (lngnbr < 0)
	{
		ft_putchar_fd('-', fd);
		lngnbr = lngnbr * -1;
	}
	if (lngnbr >= 10)
	{
		ft_putnbr_fd(lngnbr / 10, fd);
		ft_putnbr_fd(lngnbr % 10, fd);
	}
	else
	{
		ft_putchar_fd(lngnbr + '0', fd);
	}
}
