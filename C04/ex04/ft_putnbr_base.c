/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vcini <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/22 18:46:29 by vcini             #+#    #+#             */
/*   Updated: 2020/09/22 18:46:49 by vcini            ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int		ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

int		checkbase(char *base)
{
	int	x;
	int	y;

	x = 0;
	while (base[x])
	{
		if ((base[x] == '+') || (base[x] == '-'))
			return (1);
		y = x + 1;
		while ((base[y] != base[x]) && (base[y] != '\0'))
		{
			y++;
		}
		if (base[y] == base[x])
			return (1);
		x++;
	}
	return (x);
}

void	ft_putnbr_base(int nbr, char *base)
{
	int			diviseur;
	int			result;
	int			t_base;
	long int	res;

	res = nbr;
	if (checkbase(base) < 2)
		return ;
	t_base = ft_strlen(base);
	if (nbr < 0)
	{
		ft_putchar('-');
		res = nbr;
		res *= -1;
	}
	diviseur = 1;
	while ((res / diviseur) >= t_base)
		diviseur = diviseur * t_base;
	while (diviseur > 0)
	{
		result = (res / diviseur) % t_base;
		ft_putchar(base[result]);
		diviseur = diviseur / t_base;
	}
}
