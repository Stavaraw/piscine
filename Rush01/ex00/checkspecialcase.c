/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checkspecialcase.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vcini <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/20 23:15:49 by vcini             #+#    #+#             */
/*   Updated: 2020/09/20 23:15:52 by vcini            ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <helper.h>

int	false_array(int *array)
{
	int i;
	int total;

	i = 0;
	while (i < 16)
		total += array[i];
	if (total != 34)
	{
		write(1, "Error", 6);
		return (1);
	}
	return (0);
}

int	specialcase14(int cd)
{
	if (cd == 4)
		return (0);
	else
		return (1);
}

int	specialcase41(int cu)
{
	if (cu == 4)
		return (0);
	else
		return (1);
}

int	specialcase312(int cu)
{
	if (cu == 312)
		return (0);
	else
		return (1);
}

int	specialcase123(int cd)
{
	if (cd == 312)
		return (0);
	else
		return (1);
}
