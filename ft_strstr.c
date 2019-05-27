/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrheeder <jrheeder@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/23 00:34:43 by jrheeder          #+#    #+#             */
/*   Updated: 2019/05/24 15:52:40 by jrheeder         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(const char *haystack, const char	*needle)
{
	int		i;
	int		j;
	char	*result;

	i = 0;
	j = 0;

	result = (char *)haystack;
	while (result[i] != '\0')
	{
		while (needle[j] == result[i + j])
		{
			if (needle[j + 1] == '\0')
			{
				return (result + i);
			}
			j++;
		}
		i++;
	}
	return (0);
}
