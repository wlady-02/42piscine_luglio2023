/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dwilun <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/02 13:02:48 by dwilun            #+#    #+#             */
/*   Updated: 2023/08/02 13:03:20 by dwilun           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtani <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/27 13:45:50 by mtani             #+#    #+#             */
/*   Updated: 2023/08/03 12:06:36 by mtani            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	valid_b(char *base)
{
	int	i;
	int	j;

	i = 0;
	if (base == NULL || base[i] == '\0' || base[i + 1] == '\0')
		return (0);
	while (base[i] != '\0')
	{
		j = i + 1;
		if (base[i] == '-' || base [i] == '+')
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

int	find_num(char num, char *base)
{
	int	i;

	i = 0;
	while (base[i] != '\0' && base[i] != num)
		i++;
	return (i);
}

int	get_length(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int	check_char(char c, char *base)
{
	int	i;

	i = 0;
	while (base[i] != '\0')
	{
		if (base[i] == c)
			return (1);
		i++;
	}
	return (0);
}

int	ft_atoi_base(char *str, char *base)
{
	int		i;
	int		is_n;
	int		num;
	int		str_l;

	if (valid_b(base) == 0)
		return (0);
	i = 0;
	is_n = 1;
	num = 0;
	str_l = get_length(str);
	while (str[i] == ' ')
		i++;
	while (str[i] == '-' || str[i] == '+')
	{
		if (str[i++] == '-')
			is_n *= -1;
	}
	while (str[i] != '\0' && check_char(str[i], base) == 1)
	{
		num = num * valid_b(base) + find_num(str[i], base);
		i++;
	}
	return (num * is_n);
}

/*int main()
{
	char	string[20] = "  -1e8630Esab";
	char	base[20] = "0123456789abcdef";

	int result = ft_atoi_base(string, base);

	printf("%i\n", result);
}*/
