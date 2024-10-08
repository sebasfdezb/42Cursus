/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sebferna <sebferna@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/27 15:12:42 by sebferna          #+#    #+#             */
/*   Updated: 2024/09/10 13:15:04 by sebferna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H
# include <stdlib.h>
# include <unistd.h>
# include <stdarg.h>
# include <fcntl.h>
# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 42
# endif

typedef struct s_list
{
	int				value;
	int				index;
	int				pos;
	int				target_pos;
	int				cost_a;
	int				cost_b;
	struct s_list	*next;
}	t_list;

size_t	ft_strlen(const char *str);
char	*ft_strrchr(const char *s, int c);
int		ft_atoi(const char *str);
void	ft_bzero(void *s, size_t n);
int		ft_isdigit(int c);
size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize);
int		ft_strncmp(const char *s1, const char *s2, size_t n);
void	*ft_calloc(size_t count, size_t size);
char	**ft_split(char const *s, char c);
//Listas
t_list	*ft_lstnew(int value, int index, int pos, int target_pos);
int		ft_lstsize(t_list *lst);
void	ft_lstadd_front(t_list **lst, t_list *new);
t_list	*ft_lstlast(t_list *lst);
void	ft_lstadd_back(t_list **lst, t_list *new);
void	ft_lstdelone(t_list *lst, void (*del)(int));
void	ft_lstclear(t_list **lst, void (*del)(int));

char	*get_next_line(int fd);
void	ft_putendl_fd(char *s, int fd);
size_t	ft_strlen_gnl(const char *str);
void	*ft_calloc_gnl(size_t count, size_t size);
char	*ft_strjoin_gnl(char *s1, char *s2);
int		ft_strchr_gnl(const char *s, int c);

#endif
