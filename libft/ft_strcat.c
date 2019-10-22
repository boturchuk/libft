/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mboturch <mboturch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/21 16:38:47 by mboturch          #+#    #+#             */
/*   Updated: 2019/10/21 16:39:52 by mboturch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcat(char *dest, const char *src)
{
	unsigned int	a;
	unsigned int	b;

	a = 0;
	while (dest[a] != '\0')
		++a;
	b = 0;
	while (src[b] != '\0')
	{
		dest[a] = src[b];
		a++;
		++b;
	}
	dest[a] = '\0';
	return (dest);
}
