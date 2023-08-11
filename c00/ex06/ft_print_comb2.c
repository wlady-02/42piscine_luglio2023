/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dwilun <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/20 12:02:29 by dwilun            #+#    #+#             */
/*   Updated: 2023/07/25 16:05:42 by dwilun           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_char(char c)
{
	write(1, &c, 1);
}

void	ft_print(int x, int y)
{
	char	ux;
	char	dx;
	char	uy;
	char	dy;

	ux = x % 10 + '0';
	dx = x / 10 + '0';
	uy = y % 10 + '0';
	dy = y / 10 + '0';
	ft_char(dx);
	ft_char(ux);
	ft_char(' ');
	ft_char(dy);
	ft_char(uy);
	if (!(x == 98 && y == 99))
	{
		ft_char(',');
	}
}

void	ft_print_comb2(void)
{
	int	x;
	int	y;

	x = 0;
	y = x + 1;
	while (x <= 98)
	{
		while (y <= 99)
		{
			ft_print(x, y);
			y += 1;
		}
		x += 1;
		y = x + 1;
	}
}
/*
int	main(){
	ft_print_comb2();
}*/
