/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   write_numbers.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcariou <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/17 13:55:31 by pcariou           #+#    #+#             */
/*   Updated: 2019/08/18 22:20:01 by pcariou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int						ft_add_zero(int number, int i, int no_zero);
long long unsigned int	*reverse_nums(long long unsigned int *numbers,
		int size);
int						size_of_malloc(long long unsigned int number);

int						g_a;
long long unsigned int	*g_numbers;
int						g_k;
int						g_l;
int						g_count;
int						g_s;

void					hundreds_thousands(long long unsigned int number)
{
	if (g_l == 2)
		g_numbers[g_a] = ft_add_zero(1, g_l, number % 10);
	if (g_l == 3)
	{
		if (!((number % 1000) == 0 && (number % 10) == 0))
			g_numbers[g_a] = ft_add_zero(1, g_l + g_s, 1);
		else
		{
			g_a--;
			g_count--;
		}
		g_s += 3;
	}
	g_a++;
	g_count++;
	if ((number % 10) == 0)
		g_numbers[g_a] = 777;
	else
		g_numbers[g_a] = (number % 10);
}

long long unsigned int	particular_cases1(long long unsigned int number)
{
	if ((number / 10) % 10 == 1 && g_l != 2)
	{
		g_numbers[g_a] = (10 + number % 10);
		number /= 10;
		g_l = 1;
		g_count--;
	}
	else if (number % 10 == 0 && g_l != 2 && (number / 10) % 10 != 0)
	{
		g_numbers[g_a] = (((number / 10) % 10) * 10);
		number /= 10;
		g_l = 1;
		g_count--;
	}
	return (number);
}

long long unsigned int	particular_cases2(long long unsigned int number)
{
	if ((number / 10) % 10 == 1 && g_l != 1)
	{
		g_numbers[g_a] = (10 + number % 10);
		number /= 10;
		g_l++;
		g_count--;
	}
	else if (number % 10 == 0 && g_l != 1)
	{
		g_numbers[g_a] = (((number / 10) % 10) * 10);
		number /= 10;
		g_l++;
		g_count--;
	}
	else
		g_numbers[g_a] = ft_add_zero(number % 10, g_l, number % 10);
	return (number);
}

long long unsigned int	*numbers_to_strings(long long unsigned int number,
		int i)
{
	g_a = 0;
	g_k = i;
	g_l = 0;
	g_s = 0;
	g_count = 0;
	g_numbers = malloc(sizeof(*g_numbers) * size_of_malloc(number));
	while (g_a < (g_k + g_count))
	{
		if ((g_l == 2 || g_l == 3))
		{
			hundreds_thousands(number);
			number = particular_cases1(number);
		}
		else
			number = particular_cases2(number);
		number /= 10;
		if (g_l == 3)
			g_l = 1;
		else
			g_l++;
		g_a++;
	}
	return (reverse_nums(g_numbers, g_k + g_count));
}

long long unsigned int	*ft_atoi(int argc, char **argv)
{
	char					*str;
	int						i;
	long long unsigned int	number;
	long long unsigned int	*numbers;

	if (argc == 2)
		str = argv[1];
	else
		str = argv[2];
	i = 0;
	number = 0;
	while (str[i])
	{
		if (number >= 1844674407370955161)
		{
			numbers = 0;
			return (numbers);
		}
		number *= 10;
		number += (str[i] - '0');
		i++;
	}
	numbers = numbers_to_strings(number, i);
	return (numbers);
}
