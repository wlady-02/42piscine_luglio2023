/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dwilun <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/24 15:58:09 by dwilun            #+#    #+#             */
/*   Updated: 2023/07/25 10:39:37 by dwilun           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
int	ft_str_is_numeric(char *str)
{
	int	n;

	n = 0;
	if (str[0] == '\0')
	{
		return (1);
	}
	while (str[n] != '\0')
	{
		if (str[n] < '0' || str[n] > '9')
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
	int c = ft_str_is_numeric("1234a");
	printf("%i", c);
}*/
