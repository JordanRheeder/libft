/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrheeder <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/23 00:32:44 by jrheeder          #+#    #+#             */
/*   Updated: 2019/05/23 00:32:45 by jrheeder         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void    *ft_memmove(void *dest, const void *src, size_t n)
{
    unsigned char   *tmp_src;
    unsigned char   *tmp_dest;
    size_t              index;

    tmp_src = (char *)src;
    tmp_dest = (char *)dest;
    index = -1;
    if (tmp_src < tmp_dest)
    {
        while ((int)(--n) >= 0)
            *(tmp_dest + n) = *(tmp_src + n);
    }
    else
    {
        while (++index < n)
            *(tmp_dest + index) = *(tmp_src + index);
    }
    return (dest);
}
#include <stdio.h>

int main(void)
{
    char dest[] = "ol";
    const char src[] = "new";
    printf("Before memmove dest = %s, src = %s\n", dest, src);
    ft_memmove(dest, src, 3);
    printf("After memmove dest = %s, src = %s\n", dest, src);
    return (0);
}
