/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lselao <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/06 14:45:20 by lselao            #+#    #+#             */
/*   Updated: 2019/06/06 17:29:52 by lselao           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmap(const char *s, char(*f)(char))
{
	char	*L;
	size_t	i;
	size_t	len;

	i = 0;
	if (!s)
		return (NULL);
	len = ft_strlen(s);
	if (!(L = (char *)malloc(len + 1)))
		return (NULL);
	while (len > i)
	{
		L[i] = f(s[i]);
		i++;
	}
	L[i] = '\0';
	return (L);
}
