#include "libft.h" //contains string.h
#include <stdio.h> //remove


size_t ft_strlcat(char *dest, const char *src, size_t n)
{
   size_t           i;
   size_t           j;
   size_t           k;

   i = 0;
   j = ft_strlen(dest);
   k  = ft_strlen(src);
   //if (n - 1 <= j)
   //    return (dest[j + n]); // size_t
   while((j + i) < (n))
   {
        dest[j + i] = src[i];
        i++;
   }
   dest[j + i] = '\0';
   return (i); // returns both dest and src
}


int main(void)
{
    char    str1[70] = "asdasd";
    char    str2[] = "Silly";
    int     i;
    int     j;

    //str1 = "JellyBelly";

    j = ft_strlen(str1);
    i = ft_strlen(str2); 
    ft_strlcat(str1, str2, i + j);
    printf("%s\n", str1);
    return (0);
}
