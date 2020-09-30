/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   data_base.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vcini <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/20 23:17:08 by vcini             #+#    #+#             */
/*   Updated: 2020/09/20 23:30:21 by vcini            ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

char	send(char string, int num)
{
	char	*dest;
	int		i;

	i = 0;
	while (i < 4)
	{
		dest[i] = string[num * 4 + i];
		i++;
		return (*dest);
	}
}

void	data_base(int i, int y, int num)
{
	char dest;
	char string;

	if (i == 1 && y == 2)
		string = "41234213";
	if (i == 1 && y == 3)
		string = "42314132";
	if (i == 1 && y == 4)
		string = "4321";
	if (i == 2 && y == 1)
		string = "31243214";
	if (i == 2 && y == 2)
		string = "341224133142324114232143";
	if (i == 2 && y == 3)
		string = "134234211432";
	if (i == 3 && y == 1)
		string = "213413242314";
	if (i == 3 && y == 2)
		string = "124324312341";
	if (i == 4 && y == 1)
		string = "1234";
	send(string, num);
}
