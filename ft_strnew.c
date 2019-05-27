/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrheeder <jrheeder@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/26 23:02:05 by jrheeder          #+#    #+#             */
/*   Updated: 2019/05/26 23:07:16 by jrheeder         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char    *ft_strnew(size_t size)
{
    unsigned int    i;
    char            *string;

    i = 0;
    if (!(string = ft_memalloc(size + 1)))
    {
        return (NULL);
    }
    while (i < size)
    {
        string[i++] = '\0';
    }
    return (string);
}
