/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrheeder <jrheeder@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/23 00:34:27 by jrheeder          #+#    #+#             */
/*   Updated: 2019/06/08 21:36:08 by jrheeder         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *hay, const char *need, size_t len)
{
	int		i;
	int		j;
	char	*hays;

	i = 0;
	j = 0;
	hays = (char *)hay;
	if (ft_strlen(need) == 0 || need == hays)
		return (hays);
	while ((hays[i] != '\0') && (len > 0))
	{
		while (need[j] == hays[j + i])
		{
			if (need[j] == '\0')
				return (ft_strstr(hays, need));
			j++;
		}
		i++;
		len--;
	}
	return (NULL);
}
