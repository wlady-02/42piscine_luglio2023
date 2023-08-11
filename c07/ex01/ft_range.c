/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dwilun <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/31 14:34:21 by dwilun            #+#    #+#             */
/*   Updated: 2023/07/31 15:04:36 by dwilun           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
//#include <stdio.h>
int	*ft_range(int min, int max)
{
	int	*range;
	int	i;

	i = 0;
	if (min > max || min == max)
	{
		range = NULL;
		return (range);
	}
	range = (int *)malloc(sizeof(int) * (max - min));
	while (min + i < max)
	{
		range[i] = min + i;
		i++;
	}
	return (range);
}
/*
int main(int argc, char **argv)
{
	if(argc == 1)
	{
		printf("inserisci la min e max nel primo e ");
		printf("secondo argomento del programma %s\n",argv[0]);
		printf("es: %s 2 5", argv[0]);
		exit(0);
	}
	int *range = ft_range(atoi(argv[1]), atoi(argv[2]));
	if(range == NULL)
	{
		printf("Cattivone hai sbagliato!!\n");
		printf("argomento 1 = min\nargomento 2 = max\n");
		printf("es: %s 2 5", argv[0]);
		return 0;
	}
	int size = abs(atoi(argv[2]) - atoi(argv[1]));
    for (int i = 0; i < size; i++) {
        printf("%d ", range[i]);
    }
}*/
