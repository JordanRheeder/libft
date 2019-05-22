/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrheeder <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/23 00:34:06 by jrheeder          #+#    #+#             */
/*   Updated: 2019/05/23 00:34:07 by jrheeder         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <string.h>

char    *ft_strncat(char *dest, const char *src, size_t n)
{
    size_t  dest_len;
    size_t  i;

    dest_len = ft_strlen(dest);
    i = 0;
    while ((i < n) && (src[i] != '\0'))
    {
        dest[dest_len + i] = src[i];
        i++;
    }   
    dest[dest_len + i] = '\0';
    return (dest);
}

/*
int main(void)
{
    char    str1[] = "Jordan";
    char    str2[] = "Rheeder";
    size_t  i;

    i = 4;
    ft_strncat(str1, str2, i);
    printf("%s", str1);
    return (0);
}*/
