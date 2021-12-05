/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yel-aoun <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/09 15:01:28 by yel-aoun          #+#    #+#             */
/*   Updated: 2021/11/24 13:20:50 by yel-aoun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int		i;
	char	t;
	char	*r;

	i = 0;
	t = (char)c;
	r = (char *)s;
	while (s[i] != '\0')
	{
		if (s[i] == t)
			return (&r[i]);
		i++;
	}
	if (s[i] == t)
		return (&r[i]);
	return (NULL);
}
