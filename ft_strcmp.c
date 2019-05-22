#include "libft.h"
#include <stdio.h>

int		ft_strcmp(const char *s1, const char *s2)
{
	unsigned char	*str1;
	unsigned char	*str2;
	int				index;

	index	= 0;
	str1	= (unsigned char *)s1;
	str2	= (unsigned char *)s2;

	while (str1[i] != '\0')
	{

	}

}





int	main(void)
{
	const char	str1[] = "abc";
	const char	str2[] = "ABC";
	int	ret;
	
	ret = ft_strcmp(str1, str2);
	

	//Check what the returned result is by making use of if & else statements
	if (ret < 0)
		printf("str1 is less than str2");
	else if (ret > 0)
		printf("str2 is less than str1");
	else
		printf("str 1 is equal to str2");

	return (0);
}
