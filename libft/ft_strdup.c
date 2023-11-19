/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yel-aoun <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/13 17:45:58 by yel-aoun          #+#    #+#             */
/*   Updated: 2021/11/14 18:40:27 by yel-aoun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char	*cup;
	int		i;
	int		size;

	i = 0;
	size = ft_strlen(s1);
	cup = (char *)malloc(sizeof(char) * (size + 1));
	if (cup == NULL)
		return (NULL);
	while (s1[i])
	{
		cup[i] = s1[i];
		i++;
	}
	cup[i] = '\0';
	return (cup);
}
