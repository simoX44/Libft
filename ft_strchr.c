#include "libft.h"
#include <stdio.h>

char	*ft_strchr(const char *s, int c)
{
	unsigned char	*p;
	unsigned char	f;
	unsigned int	i;

	i = 0;
	p = (unsigned char *)s;
	f = (unsigned char)c;
	while (*p)
	{
		if (*p == f)
			return ((char *)p);
		p++;
	}
	return (NULL);
}



int	main()
{
	char	*te = "mohm\0ed";
	int	i = '\0';
	printf("%s\n",ft_strchr(te,i));
}
