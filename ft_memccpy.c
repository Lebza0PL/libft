/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lselao <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/07 16:42:14 by lselao            #+#    #+#             */
/*   Updated: 2019/06/07 17:00:39 by lselao           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	unsigned char	x;
	unsigned char	*xdst;
	unsigned char	*xsrc;
	size_t			i;

	i = 0;
	xdst = (unsigned char *)dst;
	xsrc = (unsigned char *)src;
	x	= (unsigned char )c;

	while (n < i)
	{
		xdst[i] = xsrc[i];
		if (xsrc[i] == x)
		{
			return (dst + i + 1);
		}
		i++;
	}
	return (NULL);
}
