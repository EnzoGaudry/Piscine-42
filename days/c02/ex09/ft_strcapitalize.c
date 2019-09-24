/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egaudry <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/06 13:31:15 by egaudry           #+#    #+#             */
/*   Updated: 2019/08/08 14:07:07 by egaudry          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		alpha(char c)
{
	if ((c >= '0') && (c <= '9'))
	{
		return (1);
	}
	if ((c >= 'a') && (c <= 'z'))
	{
		return (1);
	}
	if ((c >= 'A') && (c <= 'Z'))
	{
		return (1);
	}
	return (0);
}

int		mini(char c)
{
	if ((c >= 'a') && (c <= 'z'))
	{
		return (1);
	}
	return (0);
}

int		maj(char c)
{
	if ((c >= 'A') && (c <= 'Z'))
	{
		return (1);
	}
	return (0);
}

char	*ft_strcapitalize(char *str)
{
	int i;
	int j;

	i = 0;
	j = 0;
	while (str[i])
	{
		if ((mini(str[i])) && (j == 0))
		{
			str[i] = str[i] - 32;
		}
		else if ((maj(str[i])) && (j == 1))
		{
			str[i] = str[i] + 32;
		}
		if (!(alpha(str[i])))
		{
			j = 0;
		}
		else
			j = 1;
		i++;
	}
	return (str);
}
