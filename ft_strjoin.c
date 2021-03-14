/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jessy <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/16 19:36:25 by jessy             #+#    #+#             */
/*   Updated: 2020/12/03 23:22:59 by jessy            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	j;
	size_t	i;
	char	*c;

	if (!s1 || !s2)
		return (0);
	i = ft_strlen(s1);
	j = ft_strlen(s2);
	if (!(c = malloc(sizeof(*c) * (i + j + 1))))
		return (0);
	i = 0;
	j = -1;
	while (s1[i])
	{
		c[i] = s1[i];
		i++;
	}
	while (s2[++j])
		c[i++] = s2[j];
	c[i] = 0;
	return (c);
}
