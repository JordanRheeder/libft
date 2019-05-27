/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrheeder <jrheeder@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/27 01:35:16 by jrheeder          #+#    #+#             */
/*   Updated: 2019/05/27 02:27:35 by jrheeder         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char    *ft_strmap(char const *s, char (*f)(char))
{
    char                *string;
    unsigned int        i;

    i = 0;
    string = ft_strnew(ft_strlen(s));
    if (string != '\0' && f != '\0')
    {
        while (s[i])
        {
            string[i] = (*f)(s[i]);
            i++;
        }

        return(string);
    }
    return (NULL);
}
