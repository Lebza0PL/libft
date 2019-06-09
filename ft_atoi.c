/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lselao <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/04 15:37:11 by lselao            #+#    #+#             */
/*   Updated: 2019/06/09 17:22:36 by lselao           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_atoi(const char *str)
{
	int i;
	long num;
	int sign;

	i = 0;
	num = 0;
	sign = 1;

	if (str[i] == ' ' || str[i] == '\n' || str[i] == '\t' || str[i] == '\r' ||
			str[i] == '\v' || str[i] == '\f')
		i++;
	if (str[i] == '-')
			sign = -1;
	if (str[i] == '-' || str[i] == '+')
		i++;	
	while (str[i] && ft_isdigit(str[i]))
	{
		num = num * 10 + str[i] - 48;
		i++;
	}
	if (num < 0 && sign == -1)
		return (0);
	if (num < 0 && sign == 1)
		return (1);
	return (num * sign);
}
