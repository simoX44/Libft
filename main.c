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

void	ft_free_list(t_list *head)
{
	t_list	*tmp;

	while (head)
	{
		tmp = head->next;
		if (head->content)
			free(head->content);
		free(head->next);
		head = tmp;
	}
}

int	main()
{
 // 	char *te = "t";
 // 	int c = ' ';
 // 	char	**me;
 // 	int	x = 0;
 // 	int	i = 0;
 // 	me = ft_split(te, c);
 // 	while (me[x])
 // 	{
	// 	printf("%s\n",me[x]);
 // 		x++;
 // 	}
	// printf("%d\n",x);
 // 	free(me);
	//
	// char	*num;
	// num = ft_itoa(-2147483648);
	// printf("\n---------------------------------\n");
	// printf("%s\n",num);
	// free(num);
	// char	test_itiri[24] = "mohmed MoUiss 766 mohmed";
	// printf("\n---------------ft_striteri------------------\n");
	// ft_striteri(test_itiri, ft_test);
	// printf("%s\n",test_itiri);
	// printf("\n---------------ft_strmapi------------------\n");
	// char *strmapi = ft_strmapi("mohmed mouiss 7889", ft_test2);
	// printf("%s\n",strmapi);
	// free(strmapi);
	// printf("\n---------------ft_putchar_fd------------------\n");
	// int	fd = open("text.txt", O_CREAT | O_WRONLY | O_TRUNC, 0644);
	// ft_putnbr_fd(-2147483648, fd);
	// close(fd);
	//
	// printf("\n---------------ft_strtrim------------------\n");
	// char	*trim = "";
	// printf("%s\n",ft_strtrim(trim, ""));
	//
	printf("\n---------------ft_lstnew------------------\n");
	char *str = "this is a test for linkd list"; 
	t_list *list = ft_lstnew(str);
	// printf("%s\n",(char *)list->next);
	// printf("%s\n",(char *)list->content);

	printf("\n---------------ft_lstadd_front------------------------------------\n");
	char *str2 = "test test alah alah";
	t_list	*new_list = ft_lstnew(str2);
	ft_lstadd_front(&list,new_list);
	// list = new_list;
	printf("%s\n",(char *)new_list->content);
//	printf("%s\n",(char *));
	ft_free_list(new_list);
}
















