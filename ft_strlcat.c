/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrheeder <jrheeder@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/23 00:33:53 by jrheeder          #+#    #+#             */
/*   Updated: 2019/05/24 15:51:18 by jrheeder         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"


size_t ft_strlcat(char *dest, const char *src, size_t n)
{
   size_t           i;
   size_t           j;
   size_t           k;

   i = 0;
   j = ft_strlen(dest);
   k  = ft_strlen(src);
   //if (n - 1 <= j)
   //    return (dest[j + n]); // size_t
   while((j + i) < (n))
   {
        dest[j + i] = src[i];
        i++;
   }
   dest[j + i] = '\0';
   return (i); // returns both dest and src
}
