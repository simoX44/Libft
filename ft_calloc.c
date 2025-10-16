#include "libft.h"
#include <stdint.h>
#include <stdlib.h>

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*p;
	size_t	total_len;

	if (nmemb == 0 || size == 0)
	{
		p = malloc(0);
		if (!p)
			return (NULL);
	}
	if (nmemb > SIZE_MAX / size)
		return (NULL);
	total_len = nmemb * size;
	p = malloc(total_len);
	if (!p)
		return (NULL);
	ft_bzero(p, total_len);
	return (p);
}
