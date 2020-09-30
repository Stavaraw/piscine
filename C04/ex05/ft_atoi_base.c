/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vcini <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/22 14:18:14 by vcini             #+#    #+#             */
/*   Updated: 2020/09/22 19:01:26 by vcini            ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

int	is_in(char c, char *base)
{
	int	i;

	i = 0;
	while (base[i])
	{
		if (base[i] == c)
			return (0);
		i++;
	}
	return (1);
}

int	find(char c, char *base)
{
	int	i;

	i = 0;
	while (base[i])
	{
		if (base[i] == c)
			return (i);
		i++;
	}
	return (1);
}

int	checkbase(char *base)
{
	int	x;
	int	y;

	x = 0;
	while (base[x])
	{
		if ((base[x] == '+') || (base[x] == '-'))
			return (0);
		if ((base[x] == '\t') || (base[x] == '\v') || (base[x] == '\n') ||
				(base[x] == '\r') || (base[x] == '\f') || (base[x] == ' '))
			return (0);
		y = x + 1;
		while ((base[y] != base[x]) && (base[y] != '\0'))
		{
			y++;
		}
		if (base[y] == base[x])
			return (0);
		x++;
	}
	return (x);
}

int	ft_atoi_base(char *str, char *base)
{
	int	i;
	int	nb;
	int	sign;

	i = 0;
	nb = 0;
	sign = 1;
	if (checkbase(base) < 2)
		return (0);
	while ((str[i] == ' ') || (str[i] == '\t') || (str[i] == '\v') ||
			(str[i] == '\n') || (str[i] == '\r') || (str[i] == '\f'))
		i++;
	while ((str[i] == '-') || (str[i] == '+'))
	{
		if (str[i] == '-')
			sign = sign * -1;
		i++;
	}
	while (is_in(str[i], base) == 0)
	{
		nb = nb * (checkbase(base)) + find(str[i], base);
		i++;
	}
	return (nb * sign);
}
