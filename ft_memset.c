/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrheeder <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/23 00:32:49 by jrheeder          #+#    #+#             */
/*   Updated: 2019/05/23 00:32:50 by jrheeder         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	unsigned char    *temp_b;
    size_t              index;

    if (len == 0)
    {
        return (b);
    }
    temp_b = (unsigned char *)b;
    index = 0;
    while (index < len)
    {
        temp_b[index] = c;
        ++index;
    }
}
