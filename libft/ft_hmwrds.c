/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_hmwrds.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mboturch <mboturch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/21 15:03:22 by mboturch          #+#    #+#             */
/*   Updated: 2019/10/21 17:47:01 by mboturch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_hmwrds(char const *str, char c)
{
	size_t	i;
	int		in;

	in = 0;
	i = 0;
	while (*str)
	{
		if (!in && *str != c)
			i++;
		in = (*str == c) ? 0 : 1;
		str++;
	}
	return (i);
}
