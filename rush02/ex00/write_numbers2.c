/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   write_numbers2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcariou <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/18 16:07:10 by pcariou           #+#    #+#             */
/*   Updated: 2019/08/18 21:13:33 by pcariou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int						ft_power(int nb, int power)
{
	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	return (nb * ft_power(nb, power - 1));
}

int						ft_add_zero(int number, int i, int no_zero)
{
	if (i == 0)
		return (number);
	else
	{
		if (no_zero == 0)
			return (777);
		else
			return (number * (ft_power(10, i)));
	}
}

void					ft_swap(long long unsigned int *a,
		long long unsigned int *b)
{
	long long unsigned int c;

	c = *a;
	*a = *b;
	*b = c;
}

long long unsigned int	*reverse_nums(long long unsigned int *numbers, int size)
{
	int i;

	i = 0;
	while (i < size)
	{
		ft_swap(&numbers[i], &numbers[size - 1]);
		i++;
		size--;
	}
	return (numbers);
}

int						size_of_malloc(long long unsigned int number)
{
	int i;
	int count;

	i = 0;
	count = 0;
	while (number != 0)
	{
		count += 20;
		number /= 10;
	}
	return (count);
}
