/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lselao <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/22 17:45:02 by lselao            #+#    #+#             */
/*   Updated: 2019/05/22 17:55:56 by lselao           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_strncmp(const char *s1, const char *s2, size_t t)
{
	int i;

	i = 0;
	if (t == 0)
		return (0);
	while (s1[i] && s2[i] && s1[i] == s2[i] && i < t)
		i++;
	return (s1[i] - s2[i]);
}

int 	main()
{
	char *s1 = "hellod";
	char *s2 = "hellof";

	printf("%d", ft_strncmp(s1, s2, 5));
	return (0);
}
