/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrheeder <jrheeder@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/23 00:32:36 by jrheeder          #+#    #+#             */
/*   Updated: 2019/05/27 15:16:12 by jrheeder         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//#include <stdlib.h>
void    *ft_memcpy(void *dest, const void *src, size_t len)
{
    size_t          i;
    unsigned char   *d;
    unsigned char   *s;

    d = (unsigned char *)dest;
    s = (unsigned char *)src;
    i = 0;
    if (dest == NULL && src == NULL)
        return (0);
    while (i < len)
    {
        d[i] = s[i];
        i++;
    }
    return (dest);
}


/*
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
*/
