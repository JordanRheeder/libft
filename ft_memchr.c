#include "libft.h"
#include <stdio.h> // remove later

void    *ft_memchr(const void *s, int c, size_t n)
{
    // unsigned char    *tmp_s;
    const char          *str;
    size_t              count;

    str = (const char *)s;
    count = 0;
    while (count < n)
    {
        if (*str == (const char)c)
            return (str);
        ++str;
        ++count;
    }
    return (NULL);
}

int main(void)
{
    const char str[] = "QQWQQ";
    const char ch = 'W';
    char *ret; //return

    ret = memchr(str, ch, strlen(str));

    printf("String after %c is %s\n", ch, ret);
    return (0);
}   
