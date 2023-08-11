/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dwilun <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/25 10:52:38 by dwilun            #+#    #+#             */
/*   Updated: 2023/07/25 11:13:20 by dwilun           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
int	ft_str_is_uppercase(char *str)
{
	int	n;

	n = 0;
	if (str[0] == '\0')
	{
		return (1);
	}
	while (str[n] != '\0')
	{
		if (str[n] < 65 || str[n] > 90)
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
	int c = ft_str_is_uppercase("CFa");
	printf("%i", c);
}*/
