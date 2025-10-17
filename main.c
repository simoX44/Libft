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
#include <stdio.h>
#include <stdlib.h>

int	main()
{
	char *te = "this is just test";
	int c = ' ';
	char	**me;
	int	x = 0;
	int	i = 0;
	me = ft_split(te, c);
	while (me[x])
	{
		printf("%s\n",me[x]);
		x++;
	}
//	printf("%d\n",x);
	free(me);
	
}
