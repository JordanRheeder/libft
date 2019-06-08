/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrheeder <jrheeder@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/06 12:30:45 by jrheeder          #+#    #+#             */
/*   Updated: 2019/06/08 21:31:43 by jrheeder         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_count(const char *str, char c)
{
	int count;

	count = 0;
	while (*str)
	{
		if ((*str != c && (*(str + 1) == c)) || (*(str + 1) == '\0'))
			count++;
		str++;
	}
	return (count);
}

static int	ft_sizecheck(int c)
{
	if (c == 1)
		c = 2;
	else
		return (c);
	return (c);
}

static int	ft_length(char const *str, char c)
{
	int i;

	i = 0;
	if (!str)
		return (0);
	while (str[i] != c && str[i])
		i++;
	return (i);
}

char		**ft_strsplit(char const *str, char c)
{
	int		i;
	int		j;
	int		words;
	char	**new;

	i = 0;
	if (!str || !c)
		return (0);
	words = ft_count(str, c);
	new = (char **)malloc(sizeof(char *) * (words + 1));
	if (new == NULL)
		return (NULL);
	while (i < ft_sizecheck(words) - 1)
	{
		while (*str == c && *str)
			str++;
		new[i] = (char *)malloc(sizeof(char) * (ft_length(str, c) + 1));
		j = 0;
		while (*str != c && *str)
			new[i][j++] = *str++;
		new[i][j] = '\0';
		i++;
	}
	new[i] = 0;
	return (new);
}
