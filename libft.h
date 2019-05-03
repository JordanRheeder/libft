#ifndef LIBFT_H
# define LIBFT_H

# include <string.h>

void				*ft_memset(void *dest, int val, size_t len);
void				ft_bzero(void *to, size_t count);

typedef struct		s_list
{
	void			*content;
	size_t			content_size;
	struct s_list	*next;
}					t_list;

#endif
