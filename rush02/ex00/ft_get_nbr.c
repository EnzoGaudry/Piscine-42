/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahallain <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/17 17:13:44 by ahallain          #+#    #+#             */
/*   Updated: 2019/08/18 23:33:23 by pcariou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>

void	ft_putstr(char *str)
{
	while (*str)
		write(1, str++, 1);
}

int		ft_verify_line(int *fd, char *buffer)
{
	if (!read(*fd, buffer, 1)
			|| ((*buffer < '0' || *buffer > '9') && *buffer != '\n'))
	{
		ft_putstr("Dict Error\n");
		return (1);
	}
	return (0);
}

int		ft_index_nbr(int *fd, char *buffer, int nbr)
{
	unsigned int	res;

	while (1)
	{
		res = 0;
		if (ft_verify_line(fd, buffer))
			return (1);
		else if (*buffer != '\n')
		{
			while (*buffer != ' ' && *buffer != ':')
			{
				res *= 10;
				res += *buffer - '0';
				read(*fd, buffer, 1);
			}
			if (res == (unsigned)nbr)
				break ;
			while (*buffer != '\n')
				read(*fd, buffer, 1);
		}
	}
	return (0);
}

int		ft_show(int *fd, char *buffer)
{
	while (*buffer == ' ')
		read(*fd, buffer, 1);
	if (*buffer == ':')
		read(*fd, buffer, 1);
	else
	{
		ft_putstr("Dict Error\n");
		return (1);
	}
	while (*buffer == ' ')
		read(*fd, buffer, 1);
	while (*buffer != '\n')
	{
		write(1, buffer, 1);
		read(*fd, buffer, 1);
	}
	return (0);
}

int		ft_get_nbr(unsigned int nbr, char *filename)
{
	int				fd;
	char			*buffer;

	fd = open(filename, O_RDONLY);
	if (fd <= 0)
	{
		ft_putstr("Error\n");
		return (1);
	}
	buffer = malloc(sizeof(buffer));
	if (ft_index_nbr(&fd, buffer, nbr))
		return (1);
	if (ft_show(&fd, buffer))
		return (1);
	free(buffer);
	close(fd);
	return (0);
}
