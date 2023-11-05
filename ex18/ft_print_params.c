/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nrobinso <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/01 11:08:47 by nrobinso          #+#    #+#             */
/*   Updated: 2023/11/01 11:39:26 by nrobinso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

int	main(int argc, char **argv)
{
	int	args;
	int	pos_str;

	args = 1;
	pos_str = 0;
	while (args < argc)
	{
		while (argv[args][pos_str] != '\0')
		{
			ft_putchar(argv[args][pos_str]);
			pos_str++;
		}
		args++;
		pos_str = 0;
		ft_putchar('\n');
	}
	return (0);
}
/*
#include <unistd.h>
void	ft_putchar(char c)
{
	write(1, &c, 1);
}
*/
