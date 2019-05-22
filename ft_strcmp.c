/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrheeder <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/22 23:52:11 by jrheeder          #+#    #+#             */
/*   Updated: 2019/05/22 23:53:41 by jrheeder         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

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





int	main(void)
{
	const char	str1[] = "A";
	const char	str2[] = "A";
	int	ret;
	
	ret = ft_strcmp(str1, str2);
	

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
