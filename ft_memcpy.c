#include "libft.h"

void ft_memcpy(char *dest, const char *src, size_t n)
{
    size_t  i;
    char    *ptr1;
    char    *ptr2;

    ptr1 = dest;
    ptr2 = (char *)src;
    i = -1;
    while (++i < n)
        *(ptr1 + i) = *(ptr2 + i);
    return (dest);
}
