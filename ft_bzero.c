/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrheeder <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/23 00:32:08 by jrheeder          #+#    #+#             */
/*   Updated: 2019/05/24 11:47:09 by jrheeder         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	ft_memset(s, '\0', n);
}


/*

int main(void)
{
	char array[10] = "Dogs are";
	int i = 4;

	ft_bzero(array, i);
	printf("%s", &s)
	return (0);
	
}*/
