#include <stddef.h>
#include <stdlib.h>
char	*ft_strdup(const char *s)
{
	char	*cpy;
	size_t	i;
	size_t	len;

	len = 0;
	while (s[len])
		len++;
	cpy = malloc(sizeof(char) * len + 1);
	if (!cpy)
		return NULL;
	i = 0;
	while (s[i])
	{
		cpy[i] = s[i];
		i++;
	}
	cpy[i] = '\0';
	return (cpy);
}
