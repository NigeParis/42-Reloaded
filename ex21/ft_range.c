/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nrobinso <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/02 09:22:57 by nrobinso          #+#    #+#             */
/*   Updated: 2023/11/02 11:06:23 by nrobinso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	*range;
	int	size_range;
	int	i;

	range = NULL;
	size_range = max - min;
	i = 0;
	if (size_range < 1)
		return (NULL);
	range = malloc(sizeof(int) * size_range);
	if (!range)
		return (NULL);
	while (i < size_range)
	{
		range[i] = min + i;
		i++;
	}
	return (range);
}
/*
#include <unistd.h>

void	ft_putchar(char c);
void	ft_putnbr(int nbr);

int	main(void)
{
	int *array_ints;
	int min;
	int max;
	int i;

	min = 60;
	max = 56;
	array_ints = ft_range(min, max);
	i = 0;

	while (min + i < max)
	{
		ft_putnbr(array_ints [i]);
		ft_putchar(',');	
		ft_putchar(' ');	
		i++;
	}
	free(array_ints);

	return (0);
}

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nbr)
{

	if(nbr == - 2147483648)
	{
		write (1, "-2144783648", 11);
		return ;
	}
	if(nbr < 0)
	{
		ft_putchar('-');
		nbr = nbr * -1;
	}
	if(nbr > 9)
	{
		ft_putnbr(nbr / 10);
	}	
	ft_putchar((nbr % 10) + '0');
}
*/
