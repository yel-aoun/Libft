/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yel-aoun <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/16 13:00:05 by yel-aoun          #+#    #+#             */
/*   Updated: 2021/11/27 15:57:40 by yel-aoun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	in_set(char const *set, char c)
{
	int	i;

	i = 0;
	while (set[i])
	{
		if (set[i] == c)
			return (1);
		i++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	int	i;
	int	j;

	if (!s1 || !set)
		return (NULL);
	j = ft_strlen(s1) - 1;
	i = 0;
	while (j >= 0 && in_set(set, s1[j]))
		j--;
	while (s1[i] && in_set(set, s1[i]))
		i++;
	if (i > j)
		return (ft_strdup(""));
	return (ft_substr(s1, i, j - i + 1));
}
