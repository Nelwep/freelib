/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dgoizaus <dgoizaus@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/04 16:07:47 by dgoizaus          #+#    #+#             */
/*   Updated: 2014/11/04 16:11:59 by dgoizaus         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ft.h>

char *ft_strcpy(char *dest, char *src)
{
	int icom;

	icom = 0;
	while (src[icom])
	{
		dest[icom] = src[icom];
		icom++;
	}
	dest[icom] = '\0';
	return (dest);
}
