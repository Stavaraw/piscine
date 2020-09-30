/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vcini <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/28 18:21:42 by vcini             #+#    #+#             */
/*   Updated: 2020/09/29 19:30:31 by vcini            ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strcat(char *dest, char *src)
{
	int i;
	int j;

	j = 0;
	i = 0;
	while (dest[i])
		i++;
	while (src[j])
	{
		dest[i + j] = src[j];
		j++;
	}
	dest[i + j] = '\0';
	return (dest);
}
int		ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char *str;
	int i;
	int len;

	i = 0;
	str = NULL;
	len = 0;
	while (i < size - 1)
	{
		len = len + ft_strlen(strs[i]);
		i++;
	}
	if (!(str = malloc(sizeof(char) * (len + (ft_strlen(sep) * (size - 1))))))
		return (0);
	str[0] = '\0';
	i = 0;
	while (i < size)
	{
		ft_strcat(str, strs[i]);
		if ( i  < size - 1)
			ft_strcat(str, sep);
		i++;
	}
	return (str);
}
