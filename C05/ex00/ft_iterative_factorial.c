/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vcini <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/23 19:24:28 by vcini             #+#    #+#             */
/*   Updated: 2020/09/25 16:39:55 by vcini            ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int i;

	if (nb == 0)
		return (1);
	if (nb < 0)
		return (0);
	i = nb - 1;
	while (i != 0)
	{
		nb = nb * i;
		i--;
	}
	return (nb);
}