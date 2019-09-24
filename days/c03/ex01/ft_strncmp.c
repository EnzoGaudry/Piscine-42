/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egaudry <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/07 09:11:00 by egaudry           #+#    #+#             */
/*   Updated: 2019/08/11 17:03:19 by egaudry          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int i;
	unsigned int limit;

	i = 0;
	limit = 0;
	if (n == 0)
		return (0);
	while (s1[i] != '\0' && s1[i] == s2[i] && limit + 1 < n)
	{
		i++;
		limit++;
	}
	return (s1[i] - s2[i]);
}
