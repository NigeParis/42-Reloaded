/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nrobinso <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/31 16:20:38 by nrobinso          #+#    #+#             */
/*   Updated: 2023/11/04 07:34:59 by nrobinso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_factorial(int nb)
{
	int	result;

	if (nb == 0)
		return (1);
	if (nb < 0 || nb > 12)
		return (0);
	result = nb * ft_recursive_factorial(nb - 1);
	return (result);
}
/*
#include <unistd.h>

void ft_putchar(char c);
void ft_putnbr(int nbr);



int main(void)
{
	int result;

    result = ft_recursive_factorial(12);
	ft_putnbr(result);

	return (0);
}

void ft_putchar(char c)
{
	write(1, &c, 1);
}

void ft_putnbr(int nbr)
{
	if(nbr < -2147483648)
	{
		write(1, "overflow", 9);
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
	ft_putchar((nbr%10)+'0');
}
*/
