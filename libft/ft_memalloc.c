/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mboturch <mboturch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/21 17:19:09 by mboturch          #+#    #+#             */
/*   Updated: 2019/10/21 17:19:46 by mboturch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memalloc(size_t size)
{
	char *i;

	i = (char *)malloc(size * sizeof(char));
	if (i == NULL)
	{
		return (NULL);
	}
	ft_bzero(i, size);
	return (i);
}
