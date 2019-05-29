/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strndup.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrheeder <jrheeder@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/27 14:23:16 by jrheeder          #+#    #+#             */
/*   Updated: 2019/05/27 14:38:22 by jrheeder         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//#include <stdio.h>
#include <stdlib.h>
char    *ft_strndup(const char *s1, size_t len)
{
	char               *tmp;
    unsigned int        i;
    i = 0;
    while (i < len)
    {
    	tmp = (char *)malloc(sizeof(char) * (ft_strlen(s1) + 1));
    	if (tmp == NULL)
    		return (NULL);
        i++;
    }
    return (ft_strcpy(tmp, s1));
}



/*
int main()
{
    char source[] = "GeeksForGeeks";

    // 5 bytes of source are copied to a new memory
    // allocated dynamically and pointer to copied
    // memory is returned.
    char* target = ft_strndup(source, 5);

    printf("%s", target);
    return (0);
}
*/
