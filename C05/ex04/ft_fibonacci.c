/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vcini <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/23 19:29:17 by vcini             #+#    #+#             */
/*   Updated: 2020/09/23 23:18:26 by vcini            ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

int	ft_fibonacci(int index)
{
	if (index == 1 || index == 2)
		return (1);
	if (index < 0)
		return (-1);
	if (index == 0)
		return (0);
	return ((ft_fibonacci(index - 1)) + ft_fibonacci(index - 2));
}
