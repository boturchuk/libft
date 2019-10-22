/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mboturch <mboturch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/09 15:10:56 by mboturch          #+#    #+#             */
/*   Updated: 2019/10/21 20:30:38 by mboturch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	const char *i;

	i = s;
	while (*i)
		i++;
	if (c == '\0')
		return ((char *)i);
	while (i-- != s)
	{
		if (*i == c)
			return ((char *)i);
	}
	return (NULL);
}
