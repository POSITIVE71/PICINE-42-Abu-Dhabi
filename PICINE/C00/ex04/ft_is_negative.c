/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fasharif <farahoflife@hotmail.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/22 21:38:45 by fasharif          #+#    #+#             */
/*   Updated: 2022/05/22 21:39:32 by fasharif         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_is_negative(int n)
{
	char	x;
	char	y;

	y = 'N';
	x = 'P';
	if (n >= 0)
	{
		write(1, &x, 1);
	}
	else
	{
		write(1, &y, 1);
	}
}