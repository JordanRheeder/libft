/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrheeder <jrheeder@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/26 20:32:38 by jrheeder          #+#    #+#             */
/*   Updated: 2019/05/28 10:03:10 by jrheeder         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>
#include <stdio.h>
void    *ft_memalloc(size_t size)
{
    void    *mem;

    mem = malloc(size);
    if (!mem)
        return (NULL);
    ft_bzero(mem, size);
    return (mem);
}
