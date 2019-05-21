#include "libft.h"
//#include <string.h>
#include <stdio.h>

char    *ft_strcat(char *dest, const char *src)
{
    int         i;
    int         j;

    i = 0;
    j = 0;
    if (dest == NULL) // Checking if we have values.
        return (NULL);

    while (dest[i])
        i++;
    while (src[j])
    {
        dest[i] = src[j];
        i++;
        j++;
    }
    dest[i] = '\0';
    return (dest);
}


int main(void)
{
    char str_d[] = "Stuff";
    char str_s[] = "Added";
    ft_strcat(str_d, str_s);
    printf("%s", str_d);
    return (0);
}
