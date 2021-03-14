/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jessy <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/16 19:36:19 by jessy             #+#    #+#             */
/*   Updated: 2020/11/16 19:36:20 by jessy            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *str)
{
	size_t	i;
	char	*dest;

	i = 0;
	while (str[i])
		i++;
	if (!(dest = malloc(sizeof(*dest) * (i + 1))))
		return (0);
	i = 0;
	while (str[i++])
		dest[i - 1] = str[i - 1];
	dest[i - 1] = '\0';
	return (dest);
}
