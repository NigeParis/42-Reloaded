/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nrobinso <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/01 09:13:17 by nrobinso          #+#    #+#             */
/*   Updated: 2023/11/03 15:27:03 by nrobinso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	int	result;
	int	count;

	count = 2;
	if (nb < 1)
		return (0);
	if (nb == 1)
		return (1);
	while (count < nb && count <= 46341)
	{
		result = count * count;
		if (result == nb)
			return (count);
		count++;
	}
	return (0);
}
/*
#include <unistd.h>

void	ft_putchar(char	c);
void	ft_putnbr(int nbr);

int	main(void)
{
	int result;
	result = ft_sqrt(191884833);
	ft_putnbr(result);
	return (0);
}

void	ft_putchar(char	c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nbr)
{
	if(nbr == -2147483648)
	{
		write(1, "-2147483648", 11);
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
