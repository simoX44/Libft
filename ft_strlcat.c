
#include <stddef.h>
#include <string.h>
size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	len_d;
	size_t	len_s;

	len_d = 0;
	len_s = 0;
	while (dst[len_d] && len_d < size)
		len_d++;
	while (src[len_s])
		len_s++;
	if (len_d == size)
		return (len_s + size);
	i = 0;
	while (src[i] && (len_d + i < size - 1))
	{
		dst[len_d + i] = src[i];
		i++;
		len_d++;
	}
	dst[len_d + i] = '\0';
	return (len_d + len_s);
}



#include <stdio.h>
#include <string.h>

size_t	ft_strlcat(char *dest, const char *src, size_t size);

int	main(void)
{
	char d1[20] = "Hello";
	char d3[10] = "Hi";
	char d4[10] = "";
	char d5[5] = "1234";

	printf("1️⃣ Normal case:\n");
	printf("ft_strlcat: %zu, result: %s\n", ft_strlcat(d1, " World", 20), d1);

	printf("2️⃣ Truncation (small buffer):\n");
	printf("ft_strlcat: %zu, result: %s\n", ft_strlcat(d3, " there", 7), d3);

	printf("3️⃣ Empty dest:\n");
	printf("ft_strlcat: %zu, result: %s\n", ft_strlcat(d4, "Test", 5), d4);

	printf("4️⃣ No room in dest (size <= strlen(dest)):\n");
	printf("ft_strlcat: %zu, result: %s\n", ft_strlcat(d5, "9999", 4), d5);

	printf("5️⃣ Zero size:\n");
	char d7[10] = "Data";
	printf("ft_strlcat: %zu, result: %s\n", ft_strlcat(d7, "Test", 0), d7);

	return (0);
}

