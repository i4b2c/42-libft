/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: icaldas <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/04 13:32:58 by icaldas           #+#    #+#             */
/*   Updated: 2022/11/18 13:01:59 by icaldas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <string.h>
# include <stdio.h>
# include <strings.h>
# include <stdlib.h>
# include <unistd.h>

typedef struct s_list
{
	void			*content;
	struct s_list	*next;
}			t_list;

int				ft_isalpha(int x);
int				ft_isdigit(int x);
int				ft_isascii(int x);
int				ft_isalnum(int x);
int				ft_isprint(int x);
int				ft_strlen(char *x);
int				ft_memcmp(const void *x, const void *y, size_t z);
int				ft_toupper(int x);
int				ft_tolower(int x);
int				ft_strncmp(char *x, char *y, unsigned int z);
int				ft_atoi(const char *x);
int				ft_lstsize(t_list *lst);
void			ft_putnbr_fd(int x, int y);
void			*ft_memset(void *x, int y, size_t z);
void			ft_bzero(void *x, size_t y);
void			*ft_memcpy(void *x, const void *y, size_t z);
void			*ft_memmove(void *x, const void *y, size_t z);
void			*ft_memchr(const void *x, int y, size_t z);
void			*ft_calloc(size_t x, size_t y);
void			ft_putstr_fd(char *x, int y);
void			ft_putchar_fd(char x, int y);
void			ft_putendl_fd(char *x, int y);
void			ft_striteri(char *s, void (*f)(unsigned int, char *));
void			ft_lstadd_front(t_list **x, t_list *y);
void			ft_lstadd_back(t_list **x, t_list *y);
void			ft_lstdelone(t_list *lst, void (*del)(void *));
void			ft_lstclear(t_list **lst, void (*del)(void *));
void			ft_lstiter(t_list *lst, void (*f)(void *));
size_t			ft_strlcpy(char *x, const char *y, size_t z);
size_t			ft_strlcat(char *x, const char *y, unsigned int z);
char			*ft_strchr(const char *x, int y);
char			*ft_strrchr(const char *x, int y);
char			*ft_strnstr(const char *x, const char *y, size_t z);
char			*ft_strdup(const char *x);
char			*ft_substr(char const *x, unsigned int y, size_t z);
char			*ft_strjoin(char const *x, char const *y);
char			*ft_strtrim(char const *x, char const *y);
char			*ft_itoa(int x);
char			**ft_split(char const *s, char c);
char			*ft_strmapi(char const *s, char (*f)(unsigned int, char));
t_list			*ft_lstnew(void *content);
t_list			*ft_lstlast(t_list *lst);
t_list			*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void*));

#endif
