/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnevhuta <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/20 10:24:28 by pnevhuta          #+#    #+#             */
/*   Updated: 2017/08/31 09:43:35 by pnevhuta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <stdio.h>
# include <stdlib.h>
# include <string.h>
# include <unistd.h>

char				*ft_strcpy(char *dest, const char *src);
char				*ft_strncpy(char *dest, const char *src, size_t n);
int					ft_isdigit(int d);
int					ft_toupper(int u);
int					ft_tolower(int l);
int					ft_isalpha(int al);
int					ft_isalnum(int alnum);
int					ft_isprint(int prnt);
size_t				ft_strlen(const char *str);
char				*ft_strdup(const char *sc);
char				*ft_strstr(const char *big, const char *little);
char				*ft_strnstr(const char *big, const char *litle, size_t len);
void				ft_putchar(char c);
void				ft_putstr(char const *s);
void				ft_putchar_fd(char c, int fd);
void				ft_putstr_fd(char const *s, int fd);
char				*ft_strcat(char *s1, const char *s2);
char				*ft_strncat(char *s1, char *s2, size_t n);
void				*ft_memcpy(void *dst, const void *src, size_t n);
void				ft_bzero(void *s, size_t n);
void				*ft_memset(void *b, int c, size_t len);
int					ft_isascii(int c);
void				*ft_memccpy(void *dst, const void *src, int c, size_t n);
void				ft_strdel(char **as);
void				ft_strclr(char *s);
void				ft_memdel(void **ap);
void				*ft_memalloc(size_t size);
char				*ft_strnew(size_t size);
void				ft_putendl(char const *s);
void				ft_putendl_fd(char const *s, int fd);
void				ft_striter(char *s, void (*f)(char *));
void				ft_striteri(char *s, void (*f)(unsigned int, char *));
int					ft_strcmp(const char *s1, const char *s2);
char				*ft_strjoin(char const *s1, const char *s2);
int					ft_memcmp(const void *s1, const void *s2, size_t n);
char				*ft_strchr(const char *s, int c);
char				*ft_strrchr(const char *s, int c);
char				*ft_strmap(char const *s, char (*f)(char));
char				*ft_strsub(char const *s, unsigned int start, size_t len);
void				*ft_memchr(const void *s, int c, size_t n);
int					ft_strequ(char const *s1, char const *s2);
int					ft_strncmp(const char *s1, const char *s2, size_t n);
int					ft_strnequ(char const *s1, char const *s2, size_t n);
char				*ft_strmapi(char const *s, char (*f)(unsigned int, char));
void				*ft_memcpy_overlap(void *s1, const void *s2, size_t n);
void				*ft_memmove(void *dst, const void *src, size_t len);
size_t				ft_strlcat(char *dst, const char *src, size_t size);
char				*ft_strtrim(char const *s);
char				*ft_itoa(int n);
char				**ft_strsplit(char const *s, char c);
void				ft_putnbr_fd(int n, int fd);
void				ft_putnbr(int n);
int					ft_atoi(const char *str);
int					*ft_realloc(void *str, int originallen, int newlen);

#endif
