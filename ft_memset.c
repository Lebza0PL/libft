/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lselao <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/28 16:46:21 by lselao            #+#    #+#             */
/*   Updated: 2019/06/06 13:03:39 by lselao           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	size_t i;
	unsigned char *l;

	i = 0;
	if (len == 0)
		return (0);

	l = b;
	while (i < len)
	{
		l[i] = (unsigned char)c;
		i++;
	}
	return (b);
}
