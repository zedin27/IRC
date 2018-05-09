/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ztisnes <ztisnes@student.42.us.org>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/21 21:47:24 by ztisnes           #+#    #+#             */
/*   Updated: 2018/04/25 20:55:03 by ztisnes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# define UINT64_MAX (18446744073709551615ULL)
# define INT64_MAX (9223372036854775807LL)

# include <unistd.h>
# include <stdlib.h>
# include <string.h>

/*
** Linked List structure
*/

typedef struct		s_list
{
	void			*content;
	struct s_list	*next;
	size_t			content_size;
	int				px;
	int				py;
}					t_list;

/*
** Binary tree structure
*/

typedef struct		s_btree
{
	void			*data;
	struct s_btree	*left;
	struct s_btree	*right;
}					t_btree;

/*
** Stack & Queue
*/

typedef struct		s_queue
{
	t_list			*first;
	t_list		 	*last;
}					t_queue;

typedef struct		s_stack
{
	struct s_list	*top;
}					t_stack;

/*
** Math related functions
*/

int					ft_manhattan_heuristic(t_list *a, t_list *b);
int					ft_abs(int value);
void 				ft_swap_double(double *num1, double *num2);
void				ft_swap_ull(uint64_t *num1, uint64_t *num2);

t_list				*ft_lstnew(void const *content, size_t content_size);
void				ft_lstdelone(t_list **alst, void (*del)(void*, size_t));
void				ft_lstdel(t_list **alst, void (*del)(void *, size_t));
void				ft_lstadd(t_list **alst, t_list *new);
void				ft_lstiter(t_list *lst, void (*f)(t_list *elem));
t_list				*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem));

void				ft_memdel(void **ap);
void				*ft_memalloc(size_t size);
void				*ft_memset(void *ptr, int value, size_t num);
void				*ft_memcpy(void *str1, const void *str2, size_t num);
void				*ft_memmove(void *dst, const void *src, size_t n);
void				*ft_memchr(const void *str, int c, size_t n);
void				*ft_memccpy(void *dst, const void *src, int c, size_t n);
int					ft_memcmp(const void *str1, const void *str2, size_t n);
void				ft_bzero(void *s, size_t n);
void				*ft_realloc(void *ptr, size_t size);

char				*ft_strcpy(char *dest, const char *src);
char				*ft_strchr(const char *s, int c);
char				*ft_strdup(const char *str);
int					*ft_strndup(const char *str, size_t n);
int					ft_strequ(char const *s1, char const *s2);
int					ft_strnequ(char const *s1, char const *s2, size_t n);
size_t				ft_strlen(const char *str);
char				*ft_strncpy(char *dest, const char *src, size_t num);
char				*ft_strcat(char *s1, const char *s2);
char				*ft_strsub(char const *s, unsigned int start, size_t len);
char				*ft_strjoin(char const *s1, char const *s2);
char				*ft_strncat(char *s1, const char *s2, size_t n);
int					ft_strncmp(char const *s1, char const *s2, size_t n);
size_t				ft_strlcat(char *dst, const char *src, size_t s);
char				*ft_strstr(const char *big, const char *little);
void				ft_strdel(char **as);
void				ft_strclr(char *s);
char				*ft_strmap(char const *s, char (*f)(char));
char				*ft_strmapi(char const *s, char(*f)(unsigned int, char));
void				ft_striter(char *s, void(*f)(char *));
void				ft_striteri(char *s, void(*f)(unsigned int, char *));
char				*ft_strrchr(const char *s, int c);
char				*ft_strnstr(const char *big, const char *little, \
								size_t len);
int					ft_strcmp(const char *s1, const char *s2);
char				*ft_strnew(size_t size);
char				**ft_strsplit(char const *s, char c);
char				*ft_strtrim(char const *string);
char				*ft_strtok(char *str, const char *delim);
int					ft_atoi(char *str);
char				*ft_itoa_base(int n, int base);
char				*ft_itoa(int num);

void				ft_putchar(char c);
void				ft_putchar_fd(char c, int fd);
void				ft_putendl(char const *s);
void				ft_putendl_fd(char const *s, int fd);
void				ft_putstr(char const *s);
void				ft_putstr_fd(char const *s, int fd);
void				ft_putnbr(int n);
void				ft_putnbr_fd(int n, int fd);
int					ft_isalnum(int c);
int					ft_isalpha(int c);
int					ft_isascii(int c);
int					ft_isdigit(int c);
int					ft_isprint(int c);
int					ft_toupper(int c);
int					ft_tolower(int c);
int					ft_iswhitespace(char c);
size_t				ft_wordcount(char const *s, char c);
size_t				ft_wordlength(const char *s, char c);

t_btree				*create_node(int *value);
t_btree				*insert_left(t_btree *node, int *value);
t_btree				*insert_right(t_btree *node, int *value);

t_queue				*init_queue(void);
void				enqueue(t_queue *queue, void *content);
void				*dequeue(t_queue *queue);
void 				*peek_queue(t_queue *queue);
int					isEmpty(t_queue *queue);

t_stack				*init_stack(void);
void				push_stack(t_stack *stack, void *content);
void				*pop_stack(t_stack *stack);
void				*peek(t_stack *stack);
int					isEmpty_stack(t_stack *stack);
#endif
