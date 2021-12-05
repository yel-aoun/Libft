/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yel-aoun <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/09 21:38:35 by yel-aoun          #+#    #+#             */
/*   Updated: 2021/11/09 21:59:55 by yel-aoun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*ar1;
	unsigned char	*ar2;

	ar1 = (unsigned char *)s1;
	ar2 = (unsigned char *)s2;
	while (n > 0)
	{
		if (*ar1 != *ar2)
			return (*ar1 - *ar2);
		ar1++;
		ar2++;
		n--;
	}
	return (0);
}
