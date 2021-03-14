/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jessy <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/16 19:31:30 by jessy             #+#    #+#             */
/*   Updated: 2020/11/16 19:31:32 by jessy            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_taillenb(long int n)
{
	int k;

	k = 1;
	if (n < 0)
	{
		n *= -1;
		k++;
	}
	while (n >= 10)
	{
		n /= 10;
		k++;
	}
	return (k);
}

char	*ft_itoa(int n)
{
	long int	nb;
	int			j;
	int			i;
	char		*dest;

	nb = n;
	j = ft_taillenb(nb);
	i = 0;
	if (!(dest = malloc(sizeof(*dest) * (j + 1))))
		return (0);
	dest[j] = '\0';
	j--;
	if (nb < 0)
	{
		dest[i++] = '-';
		nb *= -1;
	}
	while (j >= i)
	{
		dest[j--] = nb % 10 + '0';
		nb /= 10;
	}
	return (dest);
}
