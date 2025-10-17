#include "libft.h"
#include <stddef.h>
#include <stdlib.h>
char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	i;
	size_t	len;
	char	*str;

	if (s == NULL || f == NULL)
		return (NULL);
	len = ft_strlen(s);
	str = malloc(sizeof(char) * (len + 1));
	i = 0;
	while (s[i])
	{
		str[i] = f(i,s[i]);
		i++;
	}
	str[i] = '\0';
	return (str);
}
