#include <stdlib.h>

char	*ft_strrchr(const char *s, int c)
{
	unsigned char *p;
	unsigned char f;
	char	*stck;

	p = (unsigned char *)s;
	f = (unsigned char)c;
	stck = NULL;
	if (f == '\0')
	{
		while (*p)
			p++;
		return ((char *)p);
	}
	while (*p)
	{
		if (*p == f)
		{
			stck = (char *)p;
		}
		p++;
	}
	return (stck);
}
