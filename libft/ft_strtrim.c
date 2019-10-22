/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mboturch <mboturch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/16 11:04:49 by mboturch          #+#    #+#             */
/*   Updated: 2019/10/21 22:19:14 by mboturch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s)
{
	size_t	start;
	size_t	end;

	start = 0;
	if (s != NULL)
	{
		end = ft_strlen(s);
		while (s[start] != '\0' && ft_whtspc(s[start]))
			start++;
		if (s[start] == '\0')
			return (ft_strdup(""));
		while (ft_whtspc(s[end - 1]))
			end--;
		if (ft_strsub(s, start, end - start))
			return (ft_strsub(s, start, end - start));
		return (0);
	}
	return (NULL);
}
