/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ogenc <ogenc@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/12 18:04:06 by ogenc             #+#    #+#             */
/*   Updated: 2022/12/14 17:40:26 by ogenc            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"
#include<stdio.h>
#include<string.h>

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	llen;
	size_t	x = 0;
	char *big1 = (char *)big;
	char *little1 = (char *)little;

	i = 0;
	while (big1)
	{
		while (little1[i] != '\0')
		{
			if (little1[i] == big1[x])
			{
				i++;
				x++;
			}
			else
			{
				i = 0;
				continue ;
			}
		}
		big1++;
	}
	return ((char *)big + i);
}
