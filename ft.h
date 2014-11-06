/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft.h                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dgoizaus <dgoizaus@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/04 15:43:34 by dgoizaus          #+#    #+#             */
/*   Updated: 2014/11/04 16:05:01 by dgoizaus         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_atoi(char *str);

int		ft_strlen(char *str);

char	*ft_strdup(char *str); 										// warning

char	*ft_strcpy(char *dest, char *src);

char	*ft_strncpy(char *dest, char *src, int n);

char	*ft_strcat(char *dest, char *src);

char	*ft_strncat(char *dest, char *src, size_t n);

size_t	ft_strlcat(char *dest, const char *src, size_t count);		// SIZE_T ?!

char	*ft_strchr(char *s, int c);

char	*ft_strrchr(const char *s, int c);

char	*ft_strstr(char *str, char *to_find);

char	*ft_strnstr(char *str, char *to_find, int n);				// youpi

void	*ft_memset(void *s, int c, size_t n);

void	ft_bzero(void *s, size_t n);

void	*ft_memcpy(void *dest, const void *src, size_t n);

void	*ft_memccpy(void *dest, const void *src, int c, size_t n);

void	*ft_memmove(void *dest, const void *src, size_t n);

void	*ft_memchr(const void *s, int c, size_t n);

int		ft_memcmp(const void *s1, const void *s2, size_t n);

char 	*ft_strdupchi(char *s1);

char 	*ft_strcmp(char *yo);										// warning next one

char 	*ft_strncmp(char *yo, int n);	

isalpha

isdigit

isalnum

isascii

isprint

toupper

tolower
