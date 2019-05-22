#include "libft.h"
#include <stdio.h>

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	int		i;
	int		j;
	char	*result;
	size_t	counter;

	counter = 0;
	i = 0;
	j = 0;
	result = (char *)haystack;

	while((result[i] != '\0') && (counter <= len))
	{
		while (needle[j] == result[i + j])
		{
			if (needle[j + 1] == '\0')
			{
				return (result + i);
			}
			j++;
		}
		i++;
		counter++;
	}
	return (0);
}


int	main(void)
{
	const char 	haystack[1024] = "step through doors";
	const char 	needle[] = "door";
	char		*ret;
	size_t	len;
	
	len = 4;
	ret = ft_strnstr(haystack, needle, len);
	printf("The substring in \n%s\n", ret);
	return (0);
}
