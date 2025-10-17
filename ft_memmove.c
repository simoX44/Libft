/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmouis <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/17 10:51:56 by mmouis            #+#    #+#             */
/*   Updated: 2025/10/17 10:51:56 by mmouis           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char *s;
	unsigned char *d;
	size_t	i;

	i = 0;
	s = (unsigned char *)src;
	d = (unsigned char *)dest;
	if (d < s)
	{
		while (i < n)
		{
			d[i] = s[i];
			i++;
		}

	}
	else if (d > s)
	{
		while (n > 0)
		{
			d[n-1] = s[n-1];
			n--;
		}
	}
	return (dest);	
}
