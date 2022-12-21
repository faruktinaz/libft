/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ogenc <ogenc@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/08 16:58:01 by ogenc             #+#    #+#             */
/*   Updated: 2022/12/14 17:37:27 by ogenc            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include<stdio.h>
#include<string.h>

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

// size_t	ft_strlcat(char *dst, const char *src, size_t size)
// {
// 	size_t	j;
// 	size_t	i;
// 	size_t	dsize;
// 	size_t	srcsize;

// 	i = 0;
// 	dsize = ft_strlen(dst);
// 	j = dsize;
// 	srcsize = ft_strlen(src);
// 	if (dsize + 1 < size )
// 	{
// 		while (i + dsize < size - 1 && src[i])
// 		{
// 			dst[j] = src[i];
// 			j++;
// 			i++;
// 		}
// 		dst[j] = '\0';
// 	}
// 	if (dsize + i >= size)
// 		dsize = size;
// 	// printf("%s\n",dst);
// 	return (dsize + srcsize);
// }

// int main()
// {
// 	char dst[] = "araba";
// 	char src[] = "motor";

// 	printf("%zu",ft_strlcat(((void *)0), src, 0));
// }