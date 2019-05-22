/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrheeder <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/23 00:34:43 by jrheeder          #+#    #+#             */
/*   Updated: 2019/05/23 00:34:44 by jrheeder         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h> // remove this

char	*ft_strstr(const char *haystack, const char	*needle)
{
	int		i;
	int		j;
	char	*result;

	i = 0;
	j = 0;

	result = (char *)haystack;
	while (result[i] != '\0')
	{
		while (needle[j] == result[i + j])
		{
			if (needle[j + 1] == '\0')
			{
				return (result + i);
			}
			j++;
		}
		i++;
	}
	return (0);
}

int	main(void)
{
	const char	haystack[1024] = "Step through doors";
	const char	needle[] = "door";
	char		*ret;

	ret = ft_strstr(haystack, needle);
	printf("The substring is \n%s\n", ret);
	return (0);
}
