/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dgoizaus <dgoizaus@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/04 16:15:19 by dgoizaus          #+#    #+#             */
/*   Updated: 2014/11/04 16:28:24 by dgoizaus         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncpy(char *dest, char *src, int n)
{
	int icom;

	icom = 0;
	while (icom < n || src[icom] != '\0')
	{
		dest[icom] = src[icom];
		i++;
	}
	while (dest[icom] != '\0')
	{
		dest[icom] = '\0';
		i++;
	}
	return (dest);
}
