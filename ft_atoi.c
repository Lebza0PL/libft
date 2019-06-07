/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lselao <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/04 15:37:11 by lselao            #+#    #+#             */
/*   Updated: 2019/06/07 14:02:44 by lselao           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_atoi(const char *str)
{
	int i;
	long num;
	long sign;

	i = 0;
	num = 0;
	sign = 1;

	if (str[i] == ' ' || str[i] == '\n' || str[i] == '\t' || str[i] == '\r' ||
			str[i] == '\v' || str[i] == '\f')
		i++;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			sign = -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		num = num * 10 + str[i] - 0;
		i++;
	}
	return ((int)(num * sign));
}
