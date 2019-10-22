/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mboturch <mboturch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/16 10:29:00 by mboturch          #+#    #+#             */
/*   Updated: 2019/10/21 17:31:00 by mboturch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*res;
	size_t	size;

	if (!s1 || !s2)
	{
		return (NULL);
	}
	size = (size_t)(ft_strlen((char*)s1) + ft_strlen((char*)s2));
	res = ft_memalloc(size);
	if (!res)
	{
		return (NULL);
	}
	ft_strcpy(res, s1);
	ft_strcat(res, (char *)s2);
	return (res);
}
