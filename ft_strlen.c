#include "libft.h"
#include <stdio.h>
#include <string.h>


size_t  ft_strlen(const char *s1)
{
    size_t     i;

    i = 0;
    while (s1[i] != '\0')
        i++;
    return (i);
}

/*
int main(void)
{
    char str[] = "My name is jordan";
    int len;

    len = ft_strlen(str);
    printf("Length of %s is %d \n", str, len);
    return (0);
} */
