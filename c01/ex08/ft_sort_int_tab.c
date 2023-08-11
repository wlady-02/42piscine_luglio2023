/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dwilun <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/24 11:51:58 by dwilun            #+#    #+#             */
/*   Updated: 2023/07/26 15:22:10 by dwilun           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_sort_int_tab(int *tab, int size)
{
	int	n;
	int	j;
	int	temp;

	j = 0;
	n = 0;
	while (j < size - 1)
	{
		while (n < size - j - 1)
		{
			if (tab[n] > tab[n + 1])
			{
				temp = tab[n];
				tab[n] = tab[n + 1];
				tab[n + 1] = temp;
			}
			n++;
		}
		n = 0;
		j++;
	}
}
/*
int main() {
    int size = 6;
    int tab[] = {34, 75, 1, -2, -5 , 9};
    printf("Array originale: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", tab[i]);
    }
    printf("\n");
    ft_sort_int_tab(tab, size);
    printf("Array invertito: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", tab[i]);
    }
    printf("\n");
    return 0;
}*/
