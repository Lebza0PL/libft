void *sr;/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lselao <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/01 17:40:57 by lselao            #+#    #+#             */
/*   Updated: 2019/06/09 16:53:28 by lselao           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memalloc(size_t size)
{
	void *sr;

	sr = malloc(size);
	if (sr == NULL)
		return (NULL);
	ft_bzero(sr, size);
	return (sr);
}
