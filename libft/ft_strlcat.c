/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mboturch <mboturch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/21 16:50:04 by mboturch          #+#    #+#             */
/*   Updated: 2019/10/21 18:54:11 by mboturch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	a;
	size_t	b;
	size_t	c;

	a = 0;
	b = 0;
	c = ft_strlen(src);
	while (dst[a] && a < size)
		a++;
	if (a != size)
	{
		while (src[b] && b < size - a - 1)
		{
			dst[a + b] = src[b];
			b++;
		}
		dst[a + b] = '\0';
	}
	return (c + a);
}
