/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agrigora <agrigora@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/22 15:37:56 by agrigora          #+#    #+#             */
/*   Updated: 2021/01/22 15:37:57 by agrigora         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void						*ft_memccpy(void *dst,
const void *src, int c, size_t n)
{
	size_t					i;
	unsigned char			*sd;
	unsigned char			*sr;
	unsigned char			uc;

	sd = dst;
	sr = (void*)src;
	uc = c;
	i = 0;
	while (i < n)
	{
		sd[i] = sr[i];
		i++;
		if (sr[i - 1] == uc)
			return (dst + i);
	}
	return (NULL);
}
