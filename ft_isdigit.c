/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrheeder <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/23 13:32:06 by jrheeder          #+#    #+#             */
/*   Updated: 2019/05/23 15:28:14 by jrheeder         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h> // remove





int	ft_isdigit(int c)
{
	if ((c <= 57) && (c >= 48))
	{
		printf("True"); //remove
		return (1);
	}
	else
		printf("False"); //remove
		return (0);
}

/*
int	main(void)
{
	char digit;

	digit = 'i';
	ft_isdigit(digit);
	return (0);	
}*/
