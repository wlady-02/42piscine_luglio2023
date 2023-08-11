/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dwilun <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/22 11:00:50 by dwilun            #+#    #+#             */
/*   Updated: 2023/07/22 14:27:35 by dwilun           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	putchar(char c)
{
	write(1, &c, 1);
}

void	print_row_char(char c, int x)
{
	int	n;

	n = 1;
	while (n <= x)
	{
		putchar(c);
		n++;
	}
}

void	print_col_char(char c, int x)
{
	int	n;

	n = 1;
	while (n <= x)
	{
		putchar(c);
		putchar('\n');
		n++;
	}
}

void	print_col(char c1, char c2, char c3, int x)
{
	putchar(c1);
	putchar('\n');
	print_col_char(c2, x - 2);
	putchar(c3);
	putchar('\n');
}

void	print_row(char c1, char c2, char c3, int x)
{
	putchar(c1);
	print_row_char(c2, x - 2);
	putchar(c3);
	putchar('\n');
}
