/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnequ.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrheeder <jrheeder@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/27 03:28:19 by jrheeder          #+#    #+#             */
/*   Updated: 2019/05/27 03:30:41 by jrheeder         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int     ft_strnequ(char const *s1, char const *s2, size_t n)
{
    unsigned int    i;
    unsigned int    s1len;
    unsigned int    s2len;

    s1len = ft_strlen(s1);
    s2len = ft_strlen(s2);
    i = 0;
    if (s1len != s2len) // if it's not the same length don't even waste computational power further comparing.
        return (0);

    while (s1[i] && s2[i] && i < n) // while s1[i] && s2[i] exist
    {
        if (s1[i] != s2[i]) // if they were same length, string1 = "asdf" string2 = "asdd"
            return (0);     // not the same
        i++;                // traverse the array
    }
    return (1);             // they were the same.
}
