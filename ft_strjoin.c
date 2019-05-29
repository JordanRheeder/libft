/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrheeder <jrheeder@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/27 20:38:48 by jrheeder          #+#    #+#             */
/*   Updated: 2019/05/28 13:52:26 by jrheeder         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <stdlib.h>

char    *ft_strjoin(char const *s1, char const *s2)
{
    char    *pdest;
    int     len;

    len = ft_strlen(s1) + ft_strlen(s2) + 1;
    pdest = (char *)malloc((len + 1)*sizeof(char));
    if (s1 == NULL)
        return (NULL);
    ft_strcpy(pdest, s1);
    ft_strcat(pdest, s2);
    pdest[len] = '\0';
    printf("%s", pdest);
    return (pdest);
}

/*
int main(void)
{
    char const  s1[] = "Hello";
    char const  s2[] = "olleH";
    ft_strjoin(s1, s2);
    return (0);
}
*/
