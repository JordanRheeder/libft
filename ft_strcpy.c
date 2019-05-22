/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrheeder <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/23 00:33:41 by jrheeder          #+#    #+#             */
/*   Updated: 2019/05/23 00:34:23 by jrheeder         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>  // remove
#include <string.h> // remove

char    *ft_strcpy(char *s1, const char *s2)
{
    size_t  cur;

    cur = 0;
    while (s2[cur] != '\0')
    {
        s1[cur] = s2[cur];
        cur++;
    }
    s1[cur] = '\0';
    return (s1);
}
int main(void)
{
    char str1[] = "Hello";
    char str2[] = "testtt";
    char str3[] = "";
    char str4[] = "GFG";

    printf("str1 is |%s| str2 is |%s|\n", str1, str2);
    ft_strcpy(str2, str1);
    printf("str1 is |%s| str2 is |%s|\n", str1, str2);
    ft_strcpy(str4, str3);
    printf("str4 is |%s| str3 is |%s|\n", str1, str2);
    return (0);
}
