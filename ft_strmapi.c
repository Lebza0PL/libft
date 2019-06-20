/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lselao <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/06 14:53:21 by lselao            #+#    #+#             */
/*   Updated: 2019/06/20 17:41:49 by lselao           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(const char *s, char (*f)(unsigned int, char))
{
	char	*l;
	size_t	i;
	size_t	len;

	i = 0;
	if (!s)
	{
		return (NULL);
	}
	len = (size_t)ft_strlen(s);
	if (!(l = (char *)malloc(len + 1)))
	{
		return (NULL);
	}
	while (len > i)
	{
		l[i] = f(i, s[i]);
		i++;
	}
	l[i] = '\0';
	return (l);
}
