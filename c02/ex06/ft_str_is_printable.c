/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dwilun <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/25 11:16:50 by dwilun            #+#    #+#             */
/*   Updated: 2023/07/27 17:25:33 by dwilun           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
int	ft_str_is_printable(char *str)
{
	int	n;

	n = 0;
	if (str[0] == '\0')
	{
		return (1);
	}
	while (str[n] != '\0')
	{
		if (str[n] < 32 || str[n] > 126)
		{
			return (0);
		}
		n++;
	}
	return (1);
}
/*
int main()
{
	int c = ft_str_is_printable("\n \t");
	printf("%i", c);
}*/
