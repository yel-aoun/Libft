/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yel-aoun <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/08 15:35:10 by yel-aoun          #+#    #+#             */
/*   Updated: 2021/11/27 15:15:08 by yel-aoun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t	dstsize)
{
	size_t	n;
	size_t	j;
	size_t	k;

	j = ft_strlen(src);
	if (dstsize == 0 && !dst)
		return (j);
	k = ft_strlen(dst);
	n = 0;
	if (k >= dstsize || dstsize == 0)
		return (dstsize + j);
	while (src[n] && k + n < dstsize - 1)
	{
		dst[k + n] = src[n];
		n++;
	}
	dst[n + k] = '\0';
	return (k + j);
}
