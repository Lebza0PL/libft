/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lselao <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/22 18:00:26 by lselao            #+#    #+#             */
/*   Updated: 2019/05/22 18:20:52 by lselao           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_isalnum(int c)
{
	if (c >= 060 && 172 >= c)
		return (1);
	else
		return (0);
}

int 	main()
{
	int i;

	i = ft_isalnum('');
	printf("%d", i);
	return (0);
}
