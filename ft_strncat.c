/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dgoizaus <dgoizaus@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/04 16:19:22 by dgoizaus          #+#    #+#             */
/*   Updated: 2014/11/04 16:20:05 by dgoizaus         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*fr_strncat(char *dest, char *src, size_t n)
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
