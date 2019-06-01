/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lselao <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/01 13:35:07 by lselao            #+#    #+#             */
/*   Updated: 2019/06/01 16:11:26 by lselao           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char 	*ft_strnstr(const char *s1, const char *s2, size_t n)
{
	size_t i;
	size_t j;

	i = 0;
	j = 0;
	if (s2[j] == '\0')
		return ((char *)s1);
	while (s1[i] && i < n)
	{
		while ((s1[i] == s2[j] || s2[j] == '\0') && i < n)
		{
			i++;
			j++;
			if (s2[j] == '\0')
				return ((char *)&s1[i - j]);
		}
		i++;
	}
	return (NULL);
}
