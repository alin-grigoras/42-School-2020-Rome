/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agrigora <agrigora@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/22 15:38:11 by agrigora          #+#    #+#             */
/*   Updated: 2021/01/22 15:38:12 by agrigora         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	iter(char *sd, char *sr, size_t len, size_t i)
{
	if (sr < sd)
	{
		i++;
		while (i <= len)
		{
			sd[len - i] = sr[len - i];
			i++;
		}
	}
	else
	{
		while (i < len)
		{
			sd[i] = sr[i];
			i++;
		}
	}
}

void		*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t	i;
	char	*sd;
	char	*sr;

	sd = dst;
	sr = (void*)src;
	i = 0;
	if (!src && !dst)
		return (NULL);
	iter(sd, sr, len, i);
	return (dst);
}
