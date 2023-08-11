/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dwilun <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/27 15:35:57 by dwilun            #+#    #+#             */
/*   Updated: 2023/07/27 15:43:41 by dwilun           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
//#include <stdlib.h>
int	ft_iterative_power(int nb, int power)
{
	int	prev;

	prev = nb;
	if (power == 0)
		return (1); 
	if (power < 0)
		return (0);
	while (power > 1)
	{
		nb *= prev;
		power--;
	}
	return (nb);
}
/*
int main(int argc, char **argv)
{	
	if(argc == 1)
	{
		printf("inserisci il numero come primo argomento del programma, ");
		printf("la potenza come secondo argomento del programma %s\n",argv[0]);
		printf("es: %s 2 3", argv[0]);
		exit(0);
	}
	int result = ft_iterative_power(atoi(argv[1]), atoi(argv[2]));
	if(result == 0)
	{
		printf("Valore non valido: '%s'", argv[1]);
		printf("\nPuoi inserire solo valori maggiori uguali di '0'");
	}
	else
		printf("Il risultato della potenza %s^%s è %i", argv[1], argv[2], result);
}*/
