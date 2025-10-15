#include <stddef.h>

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*p;
	unsigned char	f;
	size_t	i;

	p = (unsigned char *)s;
	f = (unsigned char)c;
	i = 0;
	while (i < n)
	{
		if (p[i] == f)
			return (void *)&p[i];
		i++;
	}
	return (NULL);
}
