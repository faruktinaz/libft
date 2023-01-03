/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ogenc <ogenc@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/08 16:58:01 by ogenc             #+#    #+#             */
/*   Updated: 2023/01/02 15:06:28 by ogenc            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	dstsize;
	size_t	srcsize;
	size_t	i;

	if (!dst && !size)
		return (0);
	dstsize = ft_strlen(dst);
	srcsize = ft_strlen(src);
	i = 0;
	if (dstsize + 1 < size)
	{
		while (dstsize + i < size - 1 && src[i])
		{
			dst[dstsize + i] = src[i];
			i++;
		}
		dst[dstsize + i] = '\0';
	}
	if (dstsize + i >= size)
	{
		dstsize = size;
	}
	return (dstsize + srcsize);
}
