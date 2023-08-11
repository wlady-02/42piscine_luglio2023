/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dwilun <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/25 10:40:03 by dwilun            #+#    #+#             */
/*   Updated: 2023/07/25 10:50:46 by dwilun           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
int	ft_str_is_lowercase(char *str)
{
	int	n;

	n = 0;
	if (str[0] == '\0')
	{
		return (1);
	}
	while (str[n] != '\0')
	{
		if (str[n] < 97 || str[n] > 122)
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
	int c = ft_str_is_lowercase("comevA");
	printf("%i", c);	
}*/
