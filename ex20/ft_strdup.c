/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nrobinso <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/01 16:56:02 by nrobinso          #+#    #+#             */
/*   Updated: 2023/11/02 11:50:41 by nrobinso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>

int		ft_strlen(char *str);
void	ft_strcpy(char *dest, char *src);

char	*ft_strdup(char *src)
{
	char	*copy;
	char	*src_copy;
	int		len;

	src_copy = src;
	copy = NULL;
	len = ft_strlen(src_copy);
	copy = malloc(sizeof(char) * (len + 1));
	if (!copy)
		return (NULL);
	src_copy = src;
	ft_strcpy(copy, src_copy);
	return (copy);
}

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		i++;
	}
	return (i);
}

void	ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i])
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
}
/*
#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	while (*str)
	{
		ft_putchar(*str);
		str++;
	}
}

int	main(void)
{
	char *string = "The string is even bigger";

	char *ptr;

	ptr = ft_strdup(string);
	ft_putstr(ptr);
	free(ptr);
	return (0);

}
*/
