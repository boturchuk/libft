/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mboturch <mboturch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/17 11:38:37 by mboturch          #+#    #+#             */
/*   Updated: 2019/10/21 17:47:22 by mboturch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	**ft_strsplit(char const *s, char c)
{
	char	**ptr;
	size_t	in;
	size_t	wordi;
	size_t	i;
	size_t	start;

	if (!s ||
	!(ptr = (char **)ft_memalloc((ft_hmwrds(s, c) + 1) * sizeof(char *))))
		return (NULL);
	wordi = 0;
	in = 0;
	i = 0;
	start = 0;
	while (s[i])
	{
		if (in && s[i] == c)
			ptr[wordi++] = ft_strsub(s, start, i - start);
		start = (!in && s[i] != c) ? i : start;
		in = (s[i] == c) ? 0 : 1;
		i++;
	}
	if (in)
		ptr[wordi++] = ft_strsub(s, start, i - start);
	ptr[wordi] = NULL;
	return (ptr);
}
