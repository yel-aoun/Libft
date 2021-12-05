/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yel-aoun <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/18 15:26:49 by yel-aoun          #+#    #+#             */
/*   Updated: 2021/11/27 14:27:18 by yel-aoun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_count_words(char const *str, char c)
{
	int	i;
	int	tr;

	i = 0;
	tr = 0;
	while (*str)
	{
		if (*str != c && tr == 0)
		{
			tr = 1;
			i++;
		}
		else if (*str == c)
			tr = 0;
		str++;
	}
	return (i);
}

static char	*count_alpha(char const *str, int start, int end)
{
	char	*wrd;
	int		i;

	i = 0;
	wrd = malloc((end - start + 1) * sizeof(char));
	while (start < end)
		wrd[i++] = str[start++];
	wrd[i] = '\0';
	return (wrd);
}

char	**ft_split(char const *s, char c)
{
	size_t	i;
	size_t	j;
	int		index;
	char	**split;

	if (!s)
		return (0);
	split = malloc((ft_count_words(s, c) + 1) * sizeof(char *));
	if (!split)
		return (0);
	i = -1;
	j = 0;
	index = -1;
	while (++i <= ft_strlen(s))
	{
		if (s[i] != c && index < 0)
			index = i;
		else if ((s[i] == c || i == ft_strlen(s)) && index >= 0)
		{
			split[j++] = count_alpha(s, index, i);
			index = -1;
		}
	}
	split[j] = 0;
	return (split);
}
