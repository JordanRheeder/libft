/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrheeder <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/23 00:34:14 by jrheeder          #+#    #+#             */
/*   Updated: 2019/05/23 00:34:15 by jrheeder         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

int		ft_strncmp(const char *s1, const char *s2, size_t n)
{
		//size_t		i;
		int			i;
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


int	main(void)
{
	const char	str1[] = "Aa";
	const char	str2[] = "BAA";
	int	ret;
	size_t	n;

	n = 1;

	ret = ft_strncmp(str1, str2, n);


	//Check what the returned result is by making use of if & else statements
	if (ret < 0)
	{
		printf("str1 is less than str2");
		printf("\n%d\n", ret);
}
	else if (ret > 0)
	{
		printf("str2 is less than str1");
		printf("\n%d\n", ret);
}
	else
	{
		printf("str 1 is equal to str2");
		printf("\n%d\n", ret);
	}
	return (0);
}
