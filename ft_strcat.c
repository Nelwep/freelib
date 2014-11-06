/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dgoizaus <dgoizaus@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/04 16:17:24 by dgoizaus          #+#    #+#             */
/*   Updated: 2014/11/04 16:18:06 by dgoizaus         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcat(char *dest, char *src)
{
	int zaphod;
	int paul;

	zaphod = 0;
	paul = ft_strlen(dest);
	while (src[zaphod])
	{
		dest[zaphod + paul] = src[zaphod];
		zaphod++;
	}
	dest[zaphod + paul] = '\0';
	return (dest);
}
