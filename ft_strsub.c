/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrheeder <jrheeder@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/27 06:02:51 by jrheeder          #+#    #+#             */
/*   Updated: 2019/05/27 16:55:18 by jrheeder         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char    *ft_strsub(char const *s, unsigned int start, size_t len)
{
    while (start < len)
    {
        s = (s + start++);
            //return (NULL);
        return (ft_strndup(s, len));
    }
    return (0);
}
