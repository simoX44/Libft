/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmouis <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/17 10:51:56 by mmouis            #+#    #+#             */
/*   Updated: 2025/10/17 10:51:56 by mmouis           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*subs;
	size_t	len_s;
	size_t	size;

	if (s == NULL)
		return (NULL);
	len_s = ft_strlen(s);
	if (len == 0 || *s == '\0' || start >= len_s)
		return (ft_strdup(""));
	// lens_s = 5 // start = 3 // len = 5
	size = len_s - start;  // size = 2
	if (size > len)  // 2 > 5 no if yes replace size whit len 
		size = len;
	subs = malloc(sizeof(char) * (size + 1));
	if (!subs)
		return (NULL);
	ft_memcpy(subs, s + start, size);
	subs[size] = '\0';
	return (subs);
}
