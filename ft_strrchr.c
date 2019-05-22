/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrheeder <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/23 00:34:35 by jrheeder          #+#    #+#             */
/*   Updated: 2019/05/23 00:34:36 by jrheeder         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h> //remove


char	*ft_strrchr(const char *str, int c)
{
	char	*s;
	int		index;
		
	s = (char *)str;
	index = ft_strlen(s);
	while (index > 0)
	{
		if (s[index + 1] == (char)c)
		{
			return (&s[index + 1]);
		}
		index--;
	}
	return (0);
}

int	main()
{
	int	len;
	const char str[] = "www.john..com";
	const char ch = '.';
	char *ret;

	ret = ft_strrchr(str, ch);

	printf("The string after %c is %s \n", ch , ret);
	return (0);
}
