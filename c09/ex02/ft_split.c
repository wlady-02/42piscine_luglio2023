/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dwilun <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/10 09:31:27 by dwilun            #+#    #+#             */
/*   Updated: 2023/08/10 09:31:33 by dwilun           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	check_char(char c, char *charset)
{
	int	i;

	i = 0;
	while (charset[i] != '\0')
	{
		if (c == charset[i])
			return (1);
		i++;
	}
	return (0);
}

int	count_arrays(char *str, char *charset)
{
	int	i;
	int	in_arr;
	int	count;

	if (str == 0 || str[0] == '\0')
		return (0);
	i = 0;
	count = 0;
	in_arr = 0;
	while (str[i] != '\0')
	{
		if (check_char(str[i], charset) == 0 && in_arr == 0)
		{
			in_arr = 1;
			count++;
		}
		else if (check_char(str[i], charset) == 1 && in_arr == 1)
		{
			in_arr = 0;
		}
		i++;
	}
	return (count);
}

char	**make_matrix(int count)
{
	char	**tmp;
	int		i;

	i = 0;
	tmp = (char **)malloc(sizeof(char *) * (count + 1));
	if (tmp == 0)
		return (NULL);
	while (i < count)
	{
		tmp[i] = (char *)malloc(sizeof(char) * 100);
		if (tmp[i] == 0)
			return (NULL);
		i++;
	}
	return (tmp);
}

char	**ft_split(char *str, char *charset)
{
	char	**matrix;
	int		i;
	int		j;
	int		k;
	int		count;

	count = count_arrays(str, charset);
	matrix = make_matrix(count);
	i = 0;
	j = 0;
	while (j < count)
	{
		k = 0;
		while (check_char(str[i], charset) == 1)
			i++;
		while (str[i] != '\0' && check_char(str[i], charset) == 0)
		{
			matrix[j][k++] = str[i++];
		}
		matrix[j++][k] = '\0';
	}
	matrix[j] = NULL;
	return (matrix);
}

/*int main()
{
	char  	string[] = "123456789";
	char	charset[] = "0123456789";
	char	**array;
	int i = 0;
	
	array = ft_split(string, charset);
	
	if (array == NULL)
	{
		printf("%p\n", array);
	}
	if (array != 0)
	{
		while (array[i] != 0)
		{
			printf("%s\n", array[i]);
			i++;
		}
	}
}*/
