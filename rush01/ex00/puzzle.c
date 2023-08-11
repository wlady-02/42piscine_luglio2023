/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   puzzle.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pgiorgi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/29 16:34:57 by pgiorgi           #+#    #+#             */
/*   Updated: 2023/07/30 14:35:47 by dwilun           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_create_matrix_square( char *input, int combs[4][4])
{
	int x;
	int y;
	int count;
	//int combs[4][4];
	x = 0;
	y = 0;
	count = 0;
	while (x < 4 && input[count] != '\0')
	{
		while (y < 4)
		{
			if (input[count] >= '1' && input[count] <= '4')
			{
				combs[x][y] = input[count] - 48;				
				//printf("%i ", combs[x][y]);
				y++;
			}
			count++;
		}
		x++;
		y = 0;
		//printf("\n");
	}
}

int	fratm_cumpa(int combs[4][4], int i)
{
	return(combs[i][0] + combs[i][1] + combs[i][2] + combs[i][3]);
}

int combcheck(int *comb)
{
	int i = 0;
	while(i < 4)
	{
		if(i == 3)
			break;
		if(comb[i] == comb[i + 1])
			return 0;
		i++;
	}
	return 1;
}
int ft_compare_matrix(combs[4][4])
{
	int x = 0;
	int y = 0;
	
	while (x < 4)
	{
		/*if(combcheck(combs[x]) == 0)
			return 0;
		*/
		while (y < 4)
		{
			

			if(x+1 % 2 == 0 )
			{
				if(combs[x][y] == 4)
				{
					if(combs[x-1][y] != 1)
					{	
						return 0;
					}
				}
			}
			else if(x+1 % 2 != 0)
			{

				if(combs[x][y] ==4)
				{

					if(combs[x+1][y] != 1)
					{

						return 0;
					}
				}
			}
			y++;
		}
		x++;
		y=0;
	}
	
	return 1;
}
void init_matrix(m[4][4])
{
	int x= 0;
	int y = 0;
	while(y < 4)
	{
		while (x < 4)
		{
			m[y][x] = 0;
			x ++;
		}
		y ++;
		x = 0;
	}
}
void	ft_generate_grid(int combs[4][4], matrix[4][4])
{
	int combx;
	int comby;
	int matrixa = 0;
	int matrixb = 0;

	while (comby < 4)
	{
		while (combx < 4)
		{
			if (combs[comby][combx] == 4)
			{
				printf("%i", combs[comby][combx]);
			}
			combx++;
		}
		comby++;
		combx = 0;
	}
}
void fille_col()
{
	
}
void fille_row()
{

}
int main(int argc, char **argv)
{
	int combs[4][4];
	//printf("%s", argv[1]);
	ft_create_matrix_square(argv[1], combs);
	//printf("%i",2 % 2);
	//printf("%i", ft_compare_matrix(combs));
	if(ft_compare_matrix(combs) == 0)
	{
		printf("Error");
		return 1;
	}
	return(0);
}



