/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ogenc <ogenc@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/08 16:30:13 by ogenc             #+#    #+#             */
/*   Updated: 2023/01/02 15:06:08 by ogenc            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char	*dest;
	char	*src1;
	size_t	i;

	i = 1;
	dest = (char *)dst;
	src1 = (char *)src;
	if (!dst && !src)
		return (NULL);
	if (src1 < dest)
	{
		while (i <= len)
		{
			dest[len - i] = src1[len - i];
			i++;
		}
	}
	else
		return (ft_memcpy(dst, src, len));
	return (dst);
}
