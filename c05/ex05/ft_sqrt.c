/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dwilun <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/31 09:29:08 by dwilun            #+#    #+#             */
/*   Updated: 2023/07/31 09:55:26 by dwilun           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
//#include <stdlib.h>
int	ft_sqrt(int nb)
{
	int	i;

	i = 0;
	if (nb <= 0)
		return (0);
	while ((i * i) < nb && i <= 46340)
		i++;
	if (i * i == nb)
		return (i);
	return (0);
}
/*
int main(int argc, char **argv)
{	
	if(argc == 1)
	{
		printf("inserisci il numero come primo argomento del programma %s\n",argv[0]);
		printf("es: %s 49", argv[0]);
		exit(0);
	}
	int result = ft_sqrt(atoi(argv[1]));
	if(result == 0)
		printf("Numero irrazionale: '%s' - return: %i\n", argv[1], result);
	else
		printf("La radice quadrata di '%s' è %i", argv[1], result);
}*/
