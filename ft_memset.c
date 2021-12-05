/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yel-aoun <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/04 11:46:15 by yel-aoun          #+#    #+#             */
/*   Updated: 2021/11/05 12:10:03 by yel-aoun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	size_t			i;
	unsigned char	*d;

	d = (unsigned char *) b;
	i = 0;
	while (i < len)
	{
		d[i] = (unsigned char) c;
		i++;
	}
	b = (void *) d;
	return (b);
}
