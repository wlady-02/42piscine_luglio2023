/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dwilun <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/27 15:50:34 by dwilun            #+#    #+#             */
/*   Updated: 2023/07/27 16:48:52 by dwilun           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
//#include <stdlib.h>
int	ft_fibonacci(int index)
{
	if (index < 0)
		return (-1);
	if (index < 2)
		return (index);
	return (ft_fibonacci(index - 2) + ft_fibonacci(index - 1));
}
/*
int main(int argc, char **argv)
{	
	if(argc == 1)
	{
		printf("inserisci il numero come primo argomento del programma %s\n",argv[0]);
		printf("es: %s 6", argv[0]);
		exit(0);
	}
	int result = ft_fibonacci(atoi(argv[1]));
	if(result == -1)
	{
		printf("Valore non valido: '%s'", argv[1]);
		printf("\nPuoi inserire solo valori maggiori di '0'");
	}
	else
		printf("Il valore di Fibonacci al index '%s' è %i", argv[1], result);
}*/
