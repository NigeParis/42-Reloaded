/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nrobinso <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/31 14:57:50 by nrobinso          #+#    #+#             */
/*   Updated: 2023/10/31 15:05:54 by nrobinso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_is_negative(int n)
{
	if (n < 0)
		ft_putchar('N');
	else
		ft_putchar('P');
}
/*
#include <unistd.h>

int	main(void)
{
	ft_is_negative(-1);
	ft_is_negative(1);
	ft_is_negative(0);
	ft_is_negative(-100);
	ft_is_negative(101);
	return (0);
}

void	ft_putchar(char c)
{
	write(1, &c, 1);
}*/
