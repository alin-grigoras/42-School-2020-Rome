/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agrigora <agrigora@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/22 15:37:52 by agrigora          #+#    #+#             */
/*   Updated: 2021/01/22 15:37:53 by agrigora         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void				dim(size_t *nbchar, unsigned int *tmp,
unsigned int *abs, int n)
{
	*nbchar = 1;
	*tmp = 1;
	if (n < 0)
		*abs = (unsigned int)-n;
	else
		*abs = (unsigned int)n;
	while (*abs / *tmp >= 10)
	{
		*tmp *= 10;
		(*nbchar)++;
	}
}

char				*ft_itoa(int n)
{
	size_t			neg;
	size_t			nbchar;
	unsigned int	abs;
	unsigned int	tmp;
	char			*res;

	neg = 0;
	if (n < 0)
		neg = 1;
	dim(&nbchar, &tmp, &abs, n);
	if (!(res = (char*)malloc(nbchar + neg + 1)))
		return (NULL);
	res[nbchar + neg] = 0;
	if (neg)
		res[0] = '-';
	while (nbchar > 0)
	{
		res[neg++] = (char)((abs / tmp) + '0');
		abs = abs % tmp;
		tmp /= 10;
		nbchar--;
	}
	return (res);
}
