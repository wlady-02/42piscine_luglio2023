/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dwilun <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/27 14:55:29 by dwilun            #+#    #+#             */
/*   Updated: 2023/07/27 15:04:18 by dwilun           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
//#include <stdlib.h>
int	ft_iterative_factorial(int nb)
{
	int	n;

	n = nb;
	if (nb == 0)
		return (1);
	if (nb < 0)
		return (0);
	while (nb > 1)
	{
		nb--;
		n *= nb;
	}
	return (n);
}
/*
int main(int argc, char **argv)
{	
	if(argc == 1)
	{
		printf("inserisci il numero come primo argomento del programma%s\n",argv[0]);
		printf("es: %s 2", argv[0]);
		exit(0);
	}
	int result = ft_recursive_factorial(atoi(argv[1]));
	if(result == 0)
	{
		printf("Valore non valido: '%s'", argv[1]);
		printf("\nPuoi inserire solo valori maggiori uguali di '0'");
	}
	else
		printf("Il risultato di %s! è %i", argv[1], result);
}*/
