/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrheeder <jrheeder@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/23 13:32:06 by jrheeder          #+#    #+#             */
/*   Updated: 2019/05/24 15:48:25 by jrheeder         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isdigit(int c)
{
	if ((c <= 57) && (c >= 48))
		return (1);
	else
		return (0);
}

/*
int	main(void)
{
	char digit;

	digit = 'i';
	ft_isdigit(digit);
	return (0);
}*/
