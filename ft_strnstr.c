/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrheeder <jrheeder@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/23 00:34:27 by jrheeder          #+#    #+#             */
/*   Updated: 2019/05/24 15:52:13 by jrheeder         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	int		i;
	int		j;
	char	*result;
	size_t	counter;

	counter = 0;
	i = 0;
	j = 0;
	result = (char *)haystack;

	while((result[i] != '\0') && (counter <= len))
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
		counter++;
	}
	return (0);
}
