/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vcini <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/17 05:04:09 by vcini             #+#    #+#             */
/*   Updated: 2020/09/24 21:26:26 by vcini            ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	unsigned int	n;

	if (nb < 0)
		ft_putchar('-');
	n = (nb < 0) ? nb * (-1) : nb;
	if (n > 9)
		ft_putnbr(n / 10);
	ft_putchar(n % 10 + 48);
}
