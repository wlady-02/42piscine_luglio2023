/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dwilun <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/01 08:27:39 by dwilun            #+#    #+#             */
/*   Updated: 2023/08/01 12:14:02 by dwilun           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	ft_strlen(char *str)
{
	int	n;

	n = 0;
	while (str[n] != '\0')
		n++;
	return (n);
}

char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	l_d;
	int	l_s;
	int	t;

	i = 0;
	l_d = ft_strlen(dest);
	l_s = ft_strlen(src);
	t = l_d + l_s;
	while (l_d < t)
	{
		dest[l_d] = src[i];
		l_d++;
		i++;
	}
	return (dest);
}

int	ft_strlen_matrix(int size, char **strs)
{
	int	len;
	int	i;

	len = 0;
	i = 0;
	while (i < size)
	{
		len += ft_strlen(strs[i]);
		i++;
	}
	return (len);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		i;
	char	*str;
	int		tot_l;
	int		sep_l;

	tot_l = ft_strlen_matrix(size, strs);
	sep_l = ft_strlen(sep);
	str = (char *)malloc(sizeof(char) * (((size * sep_l) - sep_l) + tot_l + 1));
	i = 0;
	while (i < size)
	{
		ft_strcat(str, strs[i]);
		if (i != size - 1)
			ft_strcat(str, sep);
		i++;
	}
	return (str);
}

int main() {
    char *words[] = {"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"};
    char *separator = ",";
    int word_count = sizeof(words) / sizeof(words[0]);

    char *result = ft_strjoin(word_count, words, separator);
    printf("Joined string: %s\n", result);

    free(result);

    return 0;
}
