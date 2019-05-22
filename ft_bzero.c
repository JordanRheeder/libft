/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrheeder <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/23 00:32:08 by jrheeder          #+#    #+#             */
/*   Updated: 2019/05/23 00:32:10 by jrheeder         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	ft_memset(s, '\0', n);
}

int main(void)
{
	char array[10] = "Dogs are";
	int i = 4;

	ft_bezero(array, i);
	printf("%s", &s)
	return (0);
	
}
