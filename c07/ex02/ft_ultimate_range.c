/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dwilun <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/31 15:05:33 by dwilun            #+#    #+#             */
/*   Updated: 2023/08/01 08:27:05 by dwilun           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
//#include <stdio.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	i;
	int	*arr;

	i = 0;
	if (min > max || min == max)
	{
		*range = NULL;
		return (0);
	}
	arr = (int *)malloc(sizeof(int) * (max - min));
	while (min + i < max)
	{
		arr[i] = min + i;
		i++;
	}
	*range = arr;
	return (i);
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
	int *range;
	ft_ultimate_range(&range, atoi(argv[1]), atoi(argv[2]));
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
