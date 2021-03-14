/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jessy <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/16 19:37:49 by jessy             #+#    #+#             */
/*   Updated: 2020/11/30 22:04:20 by jdamoise         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	size_t	j;
	char	*dest;

	i = 0;
	j = 0;
	if (!s)
		return (0);
	if (start >= ft_strlen(s))
	{
		if (!(dest = malloc(sizeof(char))))
			return (0);
		dest[0] = 0;
		return (dest);
	}
	if (!(dest = malloc(sizeof(char) * len + 1)))
		return (0);
	while (s[start] && j < len)
		dest[j++] = s[start++];
	dest[j] = '\0';
	return (dest);
}
