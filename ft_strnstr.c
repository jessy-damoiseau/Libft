/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jessy <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/16 19:37:17 by jessy             #+#    #+#             */
/*   Updated: 2020/12/03 23:24:18 by jessy            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *s1, const char *s2, size_t n)
{
	size_t i;

	if (*s2 == '\0')
		return ((char *)s1);
	i = ft_strlen(s2);
	while (*s1 && n-- >= i)
	{
		if (*s1 == *s2 && ft_strncmp(s1, s2, i) == 0)
			return ((char *)s1);
		s1++;
	}
	return (0);
}
