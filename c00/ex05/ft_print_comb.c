/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dwilun <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/19 14:26:41 by dwilun            #+#    #+#             */
/*   Updated: 2023/07/25 16:01:42 by dwilun           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	initialize(char *n)
{
	n[0] = '0';
	n[1] = '0';
	n[2] = '0';
}

void	print_comma_space(char *d)
{
	if (!(d[0] == '7' && d[1] == '8' && d[2] == '9'))
	{
		write(1, ",", 1);
		write(1, " ", 1);
	}
}

void	ft_print_comb(void)
{
	char	d[3];

	initialize(d);
	while (d[0] <= '7') 
	{
		while (d[1] <= '8') 
		{
			while (d[2] <= '9') 
			{
				if (d[0] < d[1] && d[1] < d[2]) 
				{
					write(1, &d, 3);
					print_comma_space(d);
				}
				d[2]++;
			}
			d[2] = d[1] + 1;
			d[1]++;
		}
		d[1] = d[0] + 1;
		d[0]++;
	}
}
/*
int main()
{
	ft_print_comb();
	return 0;
}*/
