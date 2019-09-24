/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcariou <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/18 21:22:20 by pcariou           #+#    #+#             */
/*   Updated: 2019/08/18 22:10:08 by pcariou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>

int						ft_get_nbr(unsigned int nbr, char *filename);
long long unsigned int	*ft_atoi(int argc, char **nbr);

void					write_error(void)
{
	write(1, "Error", 5);
	write(1, "\n", 1);
}

int						check_errors_number(char *str)
{
	int i;

	i = 0;
	if (str[0] == '0' && str[1])
	{
		write_error();
		return (1);
	}
	while (str[i])
	{
		if (str[i] < '0' || str[i] > '9')
		{
			write_error();
			return (1);
		}
		i++;
	}
	return (0);
}

int						check_errors_two_arg(int argc, char **argv)
{
	if (argc != 3 && argc != 2)
	{
		write_error();
		return (1);
	}
	if (argc == 2)
	{
		if (check_errors_number(argv[1]) == 1)
			return (1);
	}
	else if (argc == 3)
	{
		if (check_errors_number(argv[2]) == 1)
			return (1);
	}
	return (0);
}

void					ft_write_the_number(char **argv, int argc,
		long long unsigned int *tab)
{
	while (*tab)
	{
		if (*tab != 777)
		{
			write(1, " ", 1);
			if (argc == 2)
				ft_get_nbr(*tab, "./numbers.dict");
			else
				ft_get_nbr(*tab, argv[1]);
		}
		tab++;
	}
	write(1, "\n", 1);
}

int						main(int argc, char **argv)
{
	long long unsigned int *tab;

	if (check_errors_two_arg(argc, argv) == 1)
		return (0);
	tab = ft_atoi(argc, argv);
	if (tab == 0)
	{
		write_error();
		return (0);
	}
	else
	{
		if (argc == 2)
		{
			if (ft_get_nbr(*tab, "./numbers.dict"))
				return (1);
		}
		else if (ft_get_nbr(*tab, argv[1]))
			return (1);
	}
	tab++;
	ft_write_the_number(argv, argc, tab);
	free(ft_atoi(argc, argv));
	return (0);
}
