/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vcini <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/23 19:27:48 by vcini             #+#    #+#             */
/*   Updated: 2020/09/25 16:45:11 by vcini            ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int	i;
	int	res;

	res = nb;
	i = power;
	if (power < 0)
		return (0);
	if ((power == 0 && nb == 0) || (power == 0))
		return (1);
	while (i != 1)
	{
		res = res * nb;
		i--;
	}
	return (res);
}
