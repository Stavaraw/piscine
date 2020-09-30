/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vcini <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/17 03:06:26 by vcini             #+#    #+#             */
/*   Updated: 2020/09/17 04:48:03 by vcini            ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

int		ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

char	*ft_strstr(char *str, char *to_find)
{
	int i;
	int j;

	i = 0;
	j = 0;
	if (ft_strlen(to_find) == 0)
		return (str);
	while (str[i])
	{
		if (str[i] == to_find[j])
			j++;
		else if (j != 0)
		{
			i--;
			j = 0;
		}
		i++;
		if (j == ft_strlen(to_find))
			return (&str[i - j]);
	}
	return (0);
}
