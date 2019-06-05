/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lselao <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/01 13:41:59 by lselao            #+#    #+#             */
/*   Updated: 2019/06/05 10:22:59 by lselao           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char *x;

	x = (char *)malloc(sizeof(char) * len);
		if (x == NULL)
			return (NULL);

	ft_memcpy(x, src, len);
	ft_memcpy(dst, x, len);
	free(x);
	return (dst);
}
