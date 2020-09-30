/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   helper.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrochet <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/20 17:43:48 by mrochet           #+#    #+#             */
/*   Updated: 2020/09/20 23:16:14 by vcini            ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef HELPER_H
# define HELPER_H
#include <unistd.h>
#include <stdlib.h>

int		check_arguments_value(char *av);
int		array_int(char *av);
int		data_base(int i, int y, int num);
void	display(int *array);
void	*same_num_row(int *array);
void	*same_num_col(int *array);
int		false_array(int *array);
int		specialcase14(int cd);
int		specialcase41(int cu);
int		specialcase312(int cu);
int		specialcase123(int cd);
#endif
