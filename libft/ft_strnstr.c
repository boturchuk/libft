/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mboturch <mboturch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/11 12:17:48 by mboturch          #+#    #+#             */
/*   Updated: 2019/10/21 20:55:00 by mboturch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *ltl, size_t len)
{
	size_t	n;

	if (!(*ltl))
		return ((char *)big);
	n = ft_strlen(ltl);
	while (*big && n <= len--)
	{
		if (*big == *ltl && ft_memcmp(big, ltl, n) == 0)
			return ((char *)big);
		big++;
	}
	return ((void *)0);
}
