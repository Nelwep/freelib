/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dgoizaus <dgoizaus@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/04 15:39:58 by dgoizaus          #+#    #+#             */
/*   Updated: 2014/11/04 16:14:38 by dgoizaus         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ft.h>

int	ft_atoi(char *str)
{
	int black;
	int white;
	int temp;

	black = 0;
	white = 0;
	while (str[black] != '\0')
	{
		black++;
	}
	while (white < black)
	{
		temp = str[black] - 48;
		white++;
	}
	return (temp);
}
