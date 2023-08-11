/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dwilun <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/25 12:53:15 by dwilun            #+#    #+#             */
/*   Updated: 2023/07/25 14:34:02 by dwilun           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
char	*ft_strlowcase(char *str)
{
	int	n;

	n = 0;
	while (str[n] != '\0')
	{
		if (str[n] >= 'A' && str[n] <= 'Z')
		{
			str[n] += 32;
		}
		n++;
	}
	return (str);
}

char	*ft_strcapitalize(char *str)
{
	char	c;
	int		n;
	int		cap;

	n = 0;
	cap = 1;
	ft_strlowcase(str);
	while (str[n] != '\0')
	{
		c = str[n];
		if (c >= 'a' && c <= 'z' && cap == 1)
		{
			str[n] -= 32;
			cap = 0;
		}
		else if (c >= '0' && c <= '9')
			cap = 0;
		else if (!((c >= 'a' && c <= 'z') || (c >= '0' && c <= '9')))
			cap = 1;
		n++;
	}
	return (str);
}
/*
int main()
{
	char c[] = "ciao 42come va? 5tutto-bene +te/ciao";
	ft_strcapitalize(c);
	printf("%s", c);
}*/
