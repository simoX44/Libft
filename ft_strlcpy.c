 #include <stddef.h>

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
 {
	size_t	len_s;
	size_t	i;

	len_s = 0;
	i = 0;
	while (src[len_s])
		 len_s++;
	if (size == 0)
		 return (len_s);
	while (src[i] && i < (size - 1))
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	return (len_s);
 }
