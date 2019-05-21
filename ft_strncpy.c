#include "libft.h"
#include <string.h>
#include <stdio.h>

char    *ft_strncpy(char *dest, const char *src, size_t n)
{
    size_t      i;

    i = 0;
    while ((i < n) && src[i] != '\0')
    {
        dest[i] = src[i];
        i++;
    }
    while (i < n)
    {
        dest[i] = '\0';
        i++;
    }
    return (dest);
}

int main () {
   char src[40];
   char dest[12];

   memset(dest, '\0', sizeof(dest));
   strcpy(src, "This is tutorialspoint.com");
   ft_strncpy(dest, src, 10);

   printf("Final copied string : %s\n", dest);

   return(0);
}
