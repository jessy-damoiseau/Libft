/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jessy <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/16 19:36:37 by jessy             #+#    #+#             */
/*   Updated: 2020/11/16 19:36:38 by jessy            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t n)
{
	size_t i;
	size_t j;
	size_t k;

	i = 0;
	j = 0;
	if (n != 0)
	{
		while (dest[i] && i < n)
			i++;
		while (src[j] && i + j < n - 1)
		{
			dest[i + j] = src[j];
			j++;
		}
		if (i + j < n)
			dest[i + j] = 0;
	}
	k = 0;
	while (src[k])
		k++;
	return (k + i);
}
