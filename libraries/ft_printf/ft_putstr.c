/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: igama <igama@student.42.rio>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/22 20:01:45 by igama             #+#    #+#             */
/*   Updated: 2023/11/28 08:58:59 by igama            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putstr(char *c)
{
	int	i;

	i = 0;
	if (!c)
	{
		write(1, "(null)", 6);
		return (6);
	}
	while (*c)
	{
		write(1, c, 1);
		c++;
		i++;
	}
	return (i);
}