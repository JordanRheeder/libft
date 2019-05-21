#include "libft.h"
#include <string.h>
#include <stdio.h>
#include <stdlib.h>

char	*ft_strdup(const char *str)
{
	int		i;
	int		strlenis;
	char	*strdup;

	i = 0;
	strlenis = strlen((char*)str);
	strdup = (char*)malloc((strlenis + 1) * sizeof(*str));
	strdup[strlenis + 1] = '\0';
	while (i <= strlenis)
	{
		strdup[i] = str[i];
		i++;
	}
	return (strdup);
}

int main()
{
    char source[] = "GeeksForGeeks";

    // A copy of source is created dynamically
    // and pointer to copy is returned.
    char* target = strdup(source);

    printf("%s", target);
    return 0;
}
