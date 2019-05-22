/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrheeder <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/23 00:33:01 by jrheeder          #+#    #+#             */
/*   Updated: 2019/05/23 00:33:02 by jrheeder         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h> // remove

char	*ft_strchr(const char *s, int c)
{
	char	*str;

	str = (char *)s;
	while (*str != c)
	{
		if (*str == '\0')
		{
			return (NULL);
		}
		str++;
	}
	return (str);
}
int	main(void)
{
	const char	str[]	= "Jordan";
	const char	chr		= 'o';
	const char	*ret; // return from our function.

	ret = ft_strchr(str, chr);
	printf("This is our result: |%s|\n", ret);
	return (0);
}
