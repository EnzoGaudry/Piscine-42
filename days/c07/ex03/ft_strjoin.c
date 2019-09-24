/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egaudry <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/14 20:23:26 by egaudry           #+#    #+#             */
/*   Updated: 2019/08/21 09:55:54 by egaudry          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int		ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int		ft_taille(int size, char **strs, char *sep)
{
	int taille;
	int taille_sep;
	int i;
	int j;

	i = 0;
	taille = 0;
	taille_sep = ft_strlen(sep);
	while (i < size)
	{
		j = 0;
		while (strs[i][j])
		{
			taille++;
			j++;
		}
		if (i < size - 1)
			taille += taille_sep;
		i++;
	}
	return (taille);
}

void	ft_inc(int size, char **strs, char *sep, char *dest)
{
	int i;
	int k;
	int j;

	k = 0;
	i = 0;
	while (i < size)
	{
		j = 0;
		while (strs[i][j])
		{
			dest[k] = strs[i][j];
			j++;
			k++;
		}
		j = 0;
		while (sep[j] && i < size - 1)
		{
			dest[k] = sep[j];
			j++;
			k++;
		}
		i++;
	}
	dest[k] = 0;
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		fstrlen;
	char	*dest;

	fstrlen = ft_taille(size, strs, sep);
	if (size == 0)
	{
		dest = (char*)malloc(sizeof(char));
		if (dest == NULL)
			return (0);
		dest[0] = 0;
		return (dest);
	}
	else
	{
		dest = (char *)malloc(sizeof(char) * fstrlen);
		if (dest == NULL)
			return (0);
		ft_inc(size, strs, sep, dest);
	}
	return (dest);
}
