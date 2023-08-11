/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush04.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dwilun <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/22 11:26:56 by dwilun            #+#    #+#             */
/*   Updated: 2023/07/22 14:53:36 by dwilun           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	putchar(char c);
void	print_col(char c1, char c2, char c3, int x);
void	print_row(char c1, char c2, char c3, int x);

int	condition(int y, int x, int i)
{
	if (x == 1 && y == 1)
	{
		putchar('A');
		putchar('\n');
	}
	else if (y == 1)
	{
		print_col('A', 'B', 'C', x);
		return (0);
	}
	else if (i == 1)
	{
		print_row('A', 'B', 'C', y);
	}
	else if (i < x)
	{
		print_row('B', ' ', 'B', y);
	}
	else if (i == x)
	{
		print_row('C', 'B', 'A', y);
	}
	return (1);
}

void	rush(int x, int y)
{
	int	i;

	i = 1;
	while (i <= y && y > 0 && x > 0)
	{
		if (condition(x, y, i) == 0)
		{
			return ;
		}
		i++;
	}
}
