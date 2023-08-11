/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dwilun <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/27 10:01:36 by dwilun            #+#    #+#             */
/*   Updated: 2023/08/03 14:38:45 by dwilun           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putnbr(int nb)
{
	long	n;
	int		i;
	char	array[100];

	if (nb == 0)
		write(1, "0", 1);
	i = 0;
	n = (long)nb;
	if (n < 0)
	{
		write(1, "-", 1);
		n = -n;
	}
	while (n > 0)
	{
		array[i++] = (n % 10) + '0';
		n /= 10;
	}
	while (--i >= 0)
	{
		write(1, array + i, 1);
	}
}
/*
int	main()
{
	ft_putnbr(0);
	return 0;
}*/
