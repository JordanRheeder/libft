#include "libft.h"
#include <stdio.h> //remove


char	*ft_strrchr(const char *str, int c)
{
	char	*s;
	int		index;
	
	s = (char *)str;
	index = ft_strlen(s);
	while (index > 0)
	{
		if (s[index +1] == (char)c)
		{
			printf("Works");
		}
	}
	return (0);
}

int	main()
{
	int	len;
	const char str[] = "www.john.com";
	const char ch = '.';
	char *ret;

	ret = ft_strrchr(str, ch);

	printf("The string after %c is %s \n", ch , ret);
	return (0);
}
