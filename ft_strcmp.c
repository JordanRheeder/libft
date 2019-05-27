/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrheeder <jrheeder@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/22 23:52:11 by jrheeder          #+#    #+#             */
/*   Updated: 2019/05/24 15:50:17 by jrheeder         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_strcmp(const char *s1, const char *s2)
{
	int				i;
	int				total;

	total	= 0;
	i		= 0;
	while (s1[i] != '\0')
	{
		if (s1[i] != s2[i])
		{
			total =  (s1[i] - s2[i]);
			break ;
		}
		i++;
	}
	return (total);
}
