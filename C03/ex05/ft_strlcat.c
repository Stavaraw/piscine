/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vcini <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/17 01:13:33 by vcini             #+#    #+#             */
/*   Updated: 2020/09/18 15:33:04 by vcini            ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int i;
	unsigned int u;
	unsigned int y;

	i = 0;
	u = 0;
	y = 0;
	while (dest[i])
		i++;
	while (src[y])
		y++;
	if (size == 0 || i > size)
		return (y + size);
	if (y == 0)
		return (i);
	while (src[u] && (i + u < size - 1))
	{
		dest[i + u] = src[u];
		u++;
	}
	dest[i + u] = '\0';
	return (y + i);
}
