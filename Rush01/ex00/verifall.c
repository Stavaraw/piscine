/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   verifall.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vcini <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/20 23:33:30 by vcini             #+#    #+#             */
/*   Updated: 2020/09/20 23:34:23 by vcini            ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>

int	*array_int(char *av)
{
	int	i;
	int	j;
	int	*array;

	if (!(array = (int *)malloc(sizeof(int *) * 16)))
		return (0);
	i = 0;
	j = 0;
	while (j < 16)
	{
		if (av[i] >= '1' && av[i] <= '4')
		{
			array[j] = av[i] - 48;
			j++;
		}
		i += 2;
	}
	return (array);
}

int	check_arg(int ac, char *av)
{
	int	i;

	i = 0;
	if (ac != 2)
		return (1);
	while (av[i] != '\0')
	{
		if ((i % 2 == 0) && (av[i] < 48 && av[i] > 52))
			return (1);
		else if ((i % 2 == 1) && (av[i] != 32))
			return (1);
		i++;
	}
	if (i != 31)
		return (1);
	return (0);
}

int	check(int ac, char *av)
{
	if ((check_arg(ac, av) == 0))
		return (1);
	else
	{
		write(1, "KO", 2);
		return (0);
	}
}

int	main(int ac, char **av)
{
	int		i;
	int		*lol;
	char	c;

	if (check(ac, av[1]) == 1)
	{
		lol = array_int(av[1]);
		write(1, "Reussi", 6);
	}
	free(lol);
	return (0);
}
