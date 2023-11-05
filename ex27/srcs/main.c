/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nrobinso <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/04 08:56:38 by nrobinso          #+#    #+#             */
/*   Updated: 2023/11/04 12:42:34 by nrobinso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
#include "../includes/libft.h"

int	main(int argc, char *argv[])
{
	if (argc < 2)
	{
		write(2, "File name missing.", 18);
		write(1, "\n", 1);
		return (0);
	}
	if (argc > 2)
	{
		write(2, "Too many arguments.", 19);
		write(1, "\n", 1);
		return (0);
	}
	ft_display_file(argv[1]);
	return (0);
}
