/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_count_if.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nrobinso <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/03 16:30:25 by nrobinso          #+#    #+#             */
/*   Updated: 2023/11/03 18:13:09 by nrobinso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_count_if(char **tab, int (*f)(char*))
{
	int	count;
	int	j;

	count = 0;
	j = 0;
	while (tab[j])
	{
		if (f(tab[j]))
			count++;
		j++;
	}
	j = 0;
	return (count);
}
/*
#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nbr)
{
	if (nbr == -2147483648)
	{
		write(1, "-2147483648", 11);
		return ;
	}
	if (nbr < 0)
	{
		ft_putchar('-');
		nbr = nbr * -1;
	}
	if (nbr > 9)
	{
		ft_putnbr(nbr / 10);
	}
	ft_putchar((nbr % 10) + '0');
}


int	ft_get_four_letter_word(char *str)
{
	int	res;
	int count;

	count = 0;
	res = 0;
	while (*str)
	{
		count++;
		str++;
	}
	if (count == 19)
		return (1);
	return (res);
}

int	main(void)
{
	char *tab[11] = {"two","o","there","cwqwqwqwqwqwqwq","four","five"};
	int	result = 0;
	
	result = ft_count_if(tab, &ft_get_four_letter_word);

	ft_putnbr(result);
	return (0);
}
*/
