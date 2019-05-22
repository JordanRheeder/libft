/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrheeder <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/23 00:51:02 by jrheeder          #+#    #+#             */
/*   Updated: 2019/05/23 01:42:21 by jrheeder         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <stdio.h>

int	ft_isalpha(int c)
{
	if (((c <= 90) && (c >= 65)) || ((c <= 122) && (c >= 97)))
	{
		printf("It is alpha");
		return (1);
	}
	else
		return (0);
}


int	main(void)
{
	char str = 'A';

	ft_isalpha(str);
	return (0);
}
