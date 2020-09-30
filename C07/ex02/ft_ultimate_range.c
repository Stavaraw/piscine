/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vcini <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/28 17:50:20 by vcini             #+#    #+#             */
/*   Updated: 2020/09/28 18:04:00 by vcini            ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int i;
	int size;

	size = 0;
	i = 0;
	if (range <= 0)
		return (-1);
	if (min >= max)
	{
		range = NULL;
		return (0);
	}
	if (!(*range = malloc(sizeof(int *) * ((max - min)+ 1))))
		return (0);
	while (max > min)
	{
		range[0][i] = min;
		i++;
		min++;
		size++;
	}
	return (size);
}
