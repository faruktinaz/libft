/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ogenc <ogenc@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/06 18:27:17 by ogenc             #+#    #+#             */
/*   Updated: 2022/12/07 12:25:23 by ogenc            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *dst, int src, size_t n)
{
	char	*str;
	size_t	i;

	i = 0;
	str = (char *)dst;
	while (i < n)
	{
		str[i] = src;
		i++;
	}
	return (dst);
}
