/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dwilun <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/31 09:58:28 by dwilun            #+#    #+#             */
/*   Updated: 2023/07/31 11:11:47 by dwilun           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
//#include <stdlib.h>
int	ft_is_prime(int nb)
{
	int	n;

	if (nb < 0)
		return (0);
	if (nb <= 1)
		return (0);
	n = 2;
	while (n <= (nb / n))
	{
		if (nb % n == 0)
			return (0);
		n++;
	}
	return (1);
}
/*
int main(int argc, char **argv)
{
	if(argc == 1)
	{
		printf("inserisci il numero come primo argomento del programma %s\n",argv[0]);
		printf("es: %s 11", argv[0]);
		exit(0);
	}
	int result = ft_is_prime(atoi(argv[1]));
	if(result == 1)
		printf("il numero '%s' è primo - return: %i\n", argv[1], result);
	else if(result == 0)
		printf("il numero '%s' non è primo - return: %i\n", argv[1], result);
}*/
