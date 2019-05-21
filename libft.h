#ifndef LIBFT_H
# define LIBFT_H
# include <string.h>

typedef struct		s_list
{
	void			*content;
	size_t			content_size;
	struct s_list	*next;
}					t_list;

void				ft_bzero(void *to, size_t count);
void               	*ft_memchr(const void *s, int c, size_t n);
void                *ft_memcpy(char *dest, const char *src, size_t n);
void                *ft_memset(void *b, int c, size_t len);
void                *ft_memmove(void *dest, const void *src, size_t n);
char                *ft_strcat(char *dest, const char *src);
char                *ft_strcpy(char *s1, const char *s2);
char                *ft_strdup(const char *str);
size_t              ft_strlen(const char *s1);
char                *ft_strncat(char *dest, const char *src, size_t n);
char                *ft_strncpy(char *dest, const char *src, size_t n);


#endif
