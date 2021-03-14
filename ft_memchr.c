/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jessy <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/16 19:34:13 by jessy             #+#    #+#             */
/*   Updated: 2020/11/16 19:34:16 by jessy            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	b;
	unsigned char	*str;

	b = (unsigned char)c;
	str = (unsigned char *)s;
	i = 0;
	while (i < n && str[i] != b)
		i++;
	return (i == n ? NULL : &str[i]);
}
