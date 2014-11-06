/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dgoizaus <dgoizaus@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/04 16:31:00 by dgoizaus          #+#    #+#             */
/*   Updated: 2014/11/04 16:31:51 by dgoizaus         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	int a;
	int b;

	a = 0;
	b = 0;
	while (str[a] != '\0')
	{
		if (str[a] == *to_find)
		{
			while ((to_find[b] == str[a + b]) && (str[a + b] != '\0'))
			{
				b++;
				if (to_find[b] == '\0')
					return (str + a);
			}
		}
		a++;
	}
	return (str + a);
}
