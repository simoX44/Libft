/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmouis <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/17 10:51:56 by mmouis            #+#    #+#             */
/*   Updated: 2025/10/17 10:51:56 by mmouis           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

int ft_strncmp(const char *s1, const char *s2, size_t n)
{
	unsigned char *p1;
	unsigned char *p2;
	size_t	i;

	p1 = (unsigned char *)s1;
	p2 = (unsigned char *)s2;
	i = 0;
	while (i < n && p1[i] && p2[i])
	{
		if (p1[i] != p2[i])
			return (p1[i] - p2[i]);
		i++;
	}
	if (i == n)
		return (0);
	return (p1[i] - p2[i]);
}
