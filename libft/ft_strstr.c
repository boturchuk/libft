/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mboturch <mboturch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/11 20:31:03 by mboturch          #+#    #+#             */
/*   Updated: 2019/10/21 20:40:09 by mboturch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(const char *big, const char *ltl)
{
	unsigned int i;
	unsigned int j;
	unsigned int k;

	i = 0;
	if (ltl[0] == '\0')
		return ((char *)big);
	while (big[i] != '\0')
	{
		j = 0;
		if (big[i] == ltl[j])
		{
			k = i;
			while (big[k] == ltl[j])
			{
				if (ltl[j + 1] == '\0')
					return (&((char *)big)[i]);
				j++;
				k++;
			}
		}
		i++;
	}
	return (0);
}
