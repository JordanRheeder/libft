/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrheeder <jrheeder@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/23 00:32:36 by jrheeder          #+#    #+#             */
/*   Updated: 2019/05/25 17:20:15 by jrheeder         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//#include <stdlib.h>
void    *ft_memcpy(char *dest, const char *src, size_t len)
{
    char *d = dest;
    const char *s = src;
    if (len == 0)
//        abort();
        return (dest);
    else if (dest == NULL || src == NULL)
        return (0); // sgv
    while (len--)
    {
        *d++ = *s++;
    }
    return (dest);
}







/*
void	*ft_memcpy(char *dest, const char *src, size_t n)
{
    size_t  i;
    char    *ptr1;
    char    *ptr2;

    ptr1 = (char *)dest;
    ptr2 = (char *)src;
    i = -1;
    if (n == NULL)
        return (dest);
    while (++i < n)
        *(ptr1 + i) = *(ptr2 + i);
	return (dest);
}
*/
