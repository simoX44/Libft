/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmouis <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/13 15:16:30 by mmouis            #+#    #+#             */
/*   Updated: 2025/10/13 15:35:01 by mmouis           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

void  *ft_memset(void *s, int c, size_t n)
{
	unsigned char *p;
	unsigned char v;
	size_t	i;

	p = (unsigned char *)s;
	v = (unsigned char)c;
	i = 0;
	while (i < n)
	{
		p[i] = v;
		i++;
	}
	return (s);
}
