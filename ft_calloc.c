#include "libft.h"
#include <stdint.h>
#include <stddef.h>
#include <stdlib.h>

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*p;
	size_t	total_len;

	if (size != 0 && nmemb > SIZE_MAX / size)
		return (NULL);
	total_len = nmemb * size;
	p = malloc(total_len);
	if (!p)
		return (NULL);
	ft_bzero(p, total_len);
	return (p);
}
