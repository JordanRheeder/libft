/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrheeder <jrheeder@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/23 00:34:14 by jrheeder          #+#    #+#             */
/*   Updated: 2019/05/24 19:43:54 by jrheeder         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_strncmp(const char *s1, const char *s2, size_t n)
{
		size_t		i;
 		int			total;

		total	= 0;
		i		= 0;
		while (s1[i] != '\0' && i < n)
		{
			if (s1[i] != s2[i])
			{
				total = (s1[i] - s2[i]);
				break;
			}
			i++;
		}
		return (total);
}
