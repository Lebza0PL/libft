/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lselao <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/06 17:04:10 by lselao            #+#    #+#             */
/*   Updated: 2019/06/06 17:15:49 by lselao           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	C;
	char	*s1;
	size_t	len;

	len = ft_strlen(s) + 1;
	C 	= (char)c;
	s1	= (char *)s;
	while (len > 0)
	{
		len--;
		if (s1[len] == C)
		{
			return (s1 + len);
		}
	}
	return (0);
}
