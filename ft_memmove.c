/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lselao <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/01 13:41:59 by lselao            #+#    #+#             */
/*   Updated: 2019/06/01 16:41:16 by lselao           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t n)
{
	size_t i;

	if (dst < src)
	{
		ft_memcpy(dst, src, n);
	}
	else
	{
		i = n;
		while (n--)
		{
			*(unsigned char*)(dst + i) = *(unsigned char*)(src + i);
		}
	}
	return (dst);
}
