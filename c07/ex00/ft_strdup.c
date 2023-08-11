/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dwilun <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/31 14:12:57 by dwilun            #+#    #+#             */
/*   Updated: 2023/08/01 09:13:34 by dwilun           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
//#include <stdio.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

char	*ft_strdup(char *src)
{
	char	*copy;
	int		i;

	if (src == NULL)
		return (src);
	i = 0;
	copy = (char *)malloc(sizeof(char) * (ft_strlen(src) + 1));
	while (src[i] != '\0')
	{
		copy[i] = src[i];
		i++;
	}
	return (copy);
}
/*
int main(int argc, char **argv)
{
	if(argc == 1)
	{
		printf("inserisci la stringa come primo argomento del programma %s\n",argv[0]);
		printf("es: %s ciao", argv[0]);
		exit(0);
	}
	char *copy = ft_strdup(argv[1]);
	printf("%s\n", copy);
}*/
