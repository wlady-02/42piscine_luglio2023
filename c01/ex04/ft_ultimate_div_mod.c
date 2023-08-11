/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dwilun <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/21 10:02:18 by dwilun            #+#    #+#             */
/*   Updated: 2023/07/26 15:21:41 by dwilun           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	temp;

	temp = *a / *b;
	*b = *a % *b;
	*a = temp;
}
/*
int main()
{
	int a = 12;
	int b = 2;
	printf("%d\n%d", a, b);
	ft_ultimate_div_mod(&a, &b);
		printf("%d\n%d", a, b);
}*/
