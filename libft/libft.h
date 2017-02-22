/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apissier <apissier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/23 17:25:29 by apissier          #+#    #+#             */
/*   Updated: 2016/11/30 17:49:28 by apissier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H
# include <unistd.h>
# include <stdio.h>
# include <stdlib.h>
# include <string.h>

typedef struct s_list
{
  void *content;
  size_t content_size;
  struct s_list *next;
} t_list;


int			ft_atoi(const char *nptr);
int			ft_isalpha(int c);
int			ft_isalnum(int c);
int			ft_isascii(int c);
int			ft_isdigit(int c);
int			ft_isprint(int c);
void		ft_putchar(char c);
void		ft_putchar_fd(char c, int fd);
void		ft_putnbr(int n);
void		ft_putstr(const char *s);
char		*ft_strcat(char *restrict dest, const char *restrict src);
char		*ft_strchr(const char *s, int c);
void		ft_strclr(char *s);
int			strcmp(const char *s1, const char *s2);
char		*ft_strcpy(char *dest, const char *src);
char		*ft_strdup(const char *s);
void		ft_striter(char *s, void (*f)(char *));
size_t		ft_strlen(const char *s);
char		*ft_strncat(char *restrict dest,
			const char *restrict src, size_t n);
int			ft_strncmp(const char *s1, const char *s2, size_t n);
char		*ft_strncpy(char *dest, const char *src, size_t n);
char		*ft_strnstr(const char *mdf, const char *a, size_t n);
char		*ft_strrchr(const char *s, int c);
char		*ft_strstr(const char *mdf, const char *a);
int			ft_tolower(int c);
int			ft_toupper(int c);
void		ft_putnbr_fd(int n, int fd);
void		ft_putstr_fd(char const *s, int fd);
void		ft_putendl_fd(char const *s, int fd);
void		ft_putendl(char const *s);
void		*ft_memset(void *s, int c, size_t n);
void		ft_bzero(void *s, size_t n);
void		*ft_memcpy(void *restrict dst, const void *restrict src,
			size_t n);
void		*ft_memccpy(void *restrict dst, const void *restrict src,
			int c, size_t n);
void		*ft_memmove(void *dst, const void *src, size_t len);
void		*ft_memchr(const void *s, int c, size_t n);
int			ft_memcmp(const void *s1, const void *s2, size_t n);
size_t		ft_strlcat(char *restrict dst, const char *restrict src,
			size_t size);
void		*ft_memalloc(size_t size);
void		ft_memdel(void **ap);
char		*ft_strnew(size_t size);
void		ft_strdel(char **as);
char		*ft_strmap(char const *s, char (*f)(char));
char		*ft_strmapi(char const *s1, char (*f)(unsigned int, char));
int			ft_strequ(char const *s1, char const *s2);
int			ft_strnequ(char const *s1, char const *s2, size_t n);
char		*ft_strsub(char const *s, unsigned int start, size_t len);
char		*ft_strjoin(char const *s1, char const *s2);

#endif
