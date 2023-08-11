/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dwilun <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/31 13:36:03 by dwilun            #+#    #+#             */
/*   Updated: 2023/07/31 14:04:42 by dwilun           ###   ########.fr       */
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

int	ft_find_next_prime(int nb)
{
	int	i;

	if (nb <= 1)
		return (2);
	i = nb;
	while (!(ft_is_prime(i)))
		i++;
	return (i);
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
	int result = ft_find_next_prime(atoi(argv[1]));
	if(result == atoi(argv[1]))
		printf("il numero '%s' è primo!\n",argv[1]);
	else
		printf("il prossimo numero primo dopo '%s' è %i\n", argv[1], result);
}*/
