/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jessy <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/16 19:34:04 by jessy             #+#    #+#             */
/*   Updated: 2020/11/16 19:34:05 by jessy            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dest, const void *src, int c, size_t n)
{
	char	*d;
	char	*s;
	size_t	i;
	char	l;

	d = (char *)dest;
	s = (char *)src;
	l = (char)c;
	i = 0;
	while (i < n)
	{
		d[i] = s[i];
		if (s[i] == l)
			return (dest + i + 1);
		i++;
	}
	return (0);
}
