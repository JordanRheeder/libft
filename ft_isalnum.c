/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrheeder <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/23 14:18:23 by jrheeder          #+#    #+#             */
/*   Updated: 2019/05/23 17:14:39 by jrheeder         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h> //remove


int	ft_isalnum(int c)
{
	if (ft_isalpha(c) || ft_isdigit(c))
	{
		printf("T");
		return (1);
	}
	else
	{
		printf("F");
		return (0);
	}
}

/*
int	main(void)
{
	char c;
	char d;

	c = '9';
	d = 'd';

	ft_isalnum(c);
	ft_isalnum(d);
	return (0);
}*/
