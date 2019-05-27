/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrheeder <jrheeder@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/27 00:40:07 by jrheeder          #+#    #+#             */
/*   Updated: 2019/05/27 00:53:47 by jrheeder         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void    ft_striteri(char *s, void (*f)(unsigned int, char *))
{
    unsigned int    i;

    i = 0;
    if (s != '\0' && f != '\0') // prevent invalid inputs
    {
            while(*s) // while working with pointer s.
                (*f)(i++, s++); // apply f to s, then increment.
    }
}
