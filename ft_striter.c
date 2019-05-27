/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrheeder <jrheeder@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/26 23:20:09 by jrheeder          #+#    #+#             */
/*   Updated: 2019/05/27 00:39:33 by jrheeder         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void    ft_striter(char *s, void (*f)(char *))
{
    if (s != '\0' && f != '\0') // prevent invalid inputs
    {
            while(*s) // while working with pointer s.
                f(s++); // apply f to s, then increment.
    }
}
