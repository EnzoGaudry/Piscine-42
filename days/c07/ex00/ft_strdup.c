/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egaudry <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/11 19:50:59 by egaudry           #+#    #+#             */
/*   Updated: 2019/08/19 16:50:24 by egaudry          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

char	*ft_strdup(char *src)
{
	char	*here;
	int		i;

	i = 0;
	here = malloc(sizeof(*src));
	if (here == NULL)
		return (NULL);
	i = 0;
	while (src[i] != '\0')
	{
		here[i] = src[i];
		i++;
	}
	here[i] = '\0';
	return (here);
}
