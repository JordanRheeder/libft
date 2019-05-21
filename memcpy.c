#include "libft.h"

void    *ft_memcpy(void *dest, const void *src, size_t n)
{
    unsigned char   *tmp_dest;
    unsigned char   *tmp_src;
    size_t          index;

    if (n == 0)
        return (dest);
    
    tmp_dest = (unsigned char *)dest;
    tmp_src = (unsigned char *)src;
    index = 0;
    while (index < n)
    {
        tmp_dest[index] = tmp_src[index];
        index++;
    }
    return (dest);
}
