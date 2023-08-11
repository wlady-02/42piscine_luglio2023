/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dwilun <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/24 15:38:59 by dwilun            #+#    #+#             */
/*   Updated: 2023/08/02 09:59:13 by dwilun           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
int	ft_str_is_alpha(char *str)
{
	int		n;
	char	t;

	n = 0;
	if (str[0] == '\0')
	{
		return (1);
	}
	while (str[n] != '\0')
	{
		t = str[n]; 
		if (!((t >= 'A' && t <= 'Z') || (t >= 'a' && t <= 'z')))
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
	char *str= "ciao";

	int dest = ft_str_is_alpha(str);
	printf("%i", dest);
}*/
