/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmouis <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/17 10:51:56 by mmouis            #+#    #+#             */
/*   Updated: 2025/10/17 10:51:56 by mmouis           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <fcntl.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

void	ft_test(unsigned int i, char *c)
{
	if (*c >= 'a' && *c <= 'z')
		*c -= 32;
}
char	ft_test2(unsigned int i, char c)
{
	if (c >= 'a' && c <= 'z')
		c -= 32;
	return (c);
}


int	main()
{
// 	char *te = "this is just test";
// 	int c = ' ';
// 	char	**me;
// 	int	x = 0;
// 	int	i = 0;
// 	me = ft_split(te, c);
// 	while (me[x])
// 	{
// 		printf("%s\n",me[x]);
// 		x++;
// 	}
// //	printf("%d\n",x);
// 	free(me);

	// char	*num;
	// num = ft_itoa(-2147483648);
	// printf("\n---------------------------------\n");
	// printf("%s\n",num);
	// free(num);
	// printf("\n---------------ft_striteri------------------\n");
	// char	test_itiri[24] = "mohmed MoUiss 766 mohmed";
	// ft_striteri(test_itiri, ft_test);
	// printf("%s\n",test_itiri);
	// printf("\n---------------ft_strmapi------------------\n");
	// char *strmapi = ft_strmapi("mohmed mouiss 7889", ft_test2);
	// printf("%s\n",strmapi);
	// free(strmapi);
	// printf("\n---------------ft_putchar_fd------------------\n");
	int	fd = open("text.txt", O_CREAT | O_WRONLY | O_TRUNC, 0644);
	ft_putnbr_fd(989, fd);
	close(fd);
}












