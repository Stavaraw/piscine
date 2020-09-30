/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vcini <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/28 16:17:13 by vcini             #+#    #+#             */
/*   Updated: 2020/09/28 17:49:46 by vcini            ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int i;
	int *tab;

	i = 0;
	if (min >= max)
		return (NULL);
	if (!(tab = malloc(sizeof(int) * ((max - min)+ 1))))
		return (0);
	while (max > min)
	{
		tab[i] = min;
		i++;
		min++;
	}
	return (tab);
}
