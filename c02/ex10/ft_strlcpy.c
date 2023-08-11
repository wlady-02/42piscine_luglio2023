/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dwilun <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/25 14:42:03 by dwilun            #+#    #+#             */
/*   Updated: 2023/07/27 17:00:10 by dwilun           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	len;
	unsigned int	count;

	count = 0;
	len = 0;
	while (src[len] != '\0')
	{
		len++;
	}
	if (size != 0)
	{
		while (src [count] != '\0' && count < size - 1)
		{
			dest[count] = src[count];
			count++;
		}
		dest[count] = '\0';
	}
	return (len);
}
/*
int main() 
{
    char src[] = "Ciaone!";
	char dest[] = "TEST";
	printf("dest prima: %s\n", dest);
	printf("len: %i\n", ft_strlcpy(dest, src, 10));
	printf("dest dopo: %s\n", dest);
	return 0;
}*/
