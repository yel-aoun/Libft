/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yel-aoun <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/22 12:23:48 by yel-aoun          #+#    #+#             */
/*   Updated: 2021/11/24 17:26:29 by yel-aoun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	long	cup;

	cup = n;
	if (cup < 0)
	{
		ft_putchar_fd('-', fd);
		cup *= -1;
	}
	if (cup <= 9)
		ft_putchar_fd(cup + 48, fd);
	else
	{
		ft_putnbr_fd(cup / 10, fd);
		ft_putnbr_fd(cup % 10, fd);
	}
}
