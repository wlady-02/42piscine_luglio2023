/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dwilun <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/20 12:50:47 by dwilun            #+#    #+#             */
/*   Updated: 2023/07/25 10:14:20 by dwilun           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_char(char c)
{
	write(1, &c, 1);
}

int
	len_n(int nb, int l)
{
	if (nb / 10 == 0)
		return (l);
	return (len_n(nb / 10, l * 10));
}

void	ft_putnbr(int nb)
{
	char	c;
	int		len;
	long	t;

	t = nb;
	if (t < 0)
	{
		ft_print_char('-');
		t *= -1;
	}
	len = len_n(t, 1);
	while (len > 0)
	{
		c = (t / len) % 10 + '0';
		write(1, &c, 1);
		len /= 10;
	}
}
/*
int	main()
{
	ft_putnbr(2147483647);	
	return 0;
}*/
