/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egaudry <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/18 13:14:31 by egaudry           #+#    #+#             */
/*   Updated: 2019/08/21 18:47:29 by egaudry          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_separateur(char c, char *charset)
{
	int i;

	i = 0;
	while (charset[i] != '\0')
	{
		if (c == charset[i])
			return (1);
		i++;
	}
	if (c == '\0')
		return (1);
	return (0);
}

int		word_count(char *str, char *charset)
{
	int i;
	int word;

	word = 0;
	i = 0;
	while (str[i] != '\0')
	{
		if (ft_separateur(str[i + 1], charset) == 1 
			&& ft_separateur(str[i], charset) == 0)
			word++;
		i++;
	}
	return (word);
}

void	ft_write_word(char *dest, char *src, char *charset)
{
	int i;

	i = 0;
	while (ft_separateur(src[i], charset) == 0)
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
}

void	ft_write(char **split, char *str, char *charset)
{
	int i;
	int j;
	int word;

	i = 0;
	word = 0;
	while (str[i] != '\0')
	{
		if (ft_separateur(str[i], charset) == 1)
			i++;
		else
		{
			j = 0;
			while (ft_separateur(str[i + j], charset) == 0)
				j++;
			(split[word] = (char*)malloc(sizeof(char) - (j + 1));
			ft_write_word(split[word], str + 1, charset);
			i += j;
			word++;
		}
	}
}

char	**ft_split(char *str, char *charset)
{
	char	**split;
	int	word;

	word = word_count(str, charset);
	if (!(split = (char**)malloc(sizeof(char*) * (word + 1))))
		return (0);
	split[word] = 0;
	ft_write(split, str, charset);
	return (split);
}

int	main(int arc, char **argv)
{
	ft_split("Hello boujour eoui", "eu");
}
