/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dwilun <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/27 12:12:03 by dwilun            #+#    #+#             */
/*   Updated: 2023/07/27 14:51:49 by dwilun           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_check_base(char *base)
{
	int	i;
	int	j;

	i = 0;
	if (base == NULL)
		return (0);
	if (base[i] == '\0' || base[i + 1] == '\0')
		return (0);
	while (base[i] != '\0')
	{
		j = i + 1;
		if (base[i] == '-' || base[i] == '+')
			return (0);
		while (base[j] != '\0')
		{
			if (base[i] == base[j])
				return (0);
			j++;
		}
		i++;
	}
	return (i);
}

void	ft_putnbr_base(int nbr, char *base)
{
	long	n;
	char	arr[100];
	int		i;
	int		l_b;

	i = 0;
	n = (long)nbr;
	l_b = ft_check_base(base);
	if (n == 0)
		write(1, &base[0], 1);
	if (l_b <= 0)
		return ;
	if (n < 0)
	{
		write(1, "-", 1);
		n = -n;
	}
	while (n > 0)
	{
		arr[i++] = base[(n % l_b)];
		n /= l_b;
	}
	while (--i >= 0)
		write(1, arr + i, 1);
}
/*
int	main()
{
	ft_putnbr_base(12, "0123456789ABCDEF");
	return 0;
}*/
