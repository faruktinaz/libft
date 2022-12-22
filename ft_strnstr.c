/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ogenc <ogenc@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/12 18:04:06 by ogenc             #+#    #+#             */
/*   Updated: 2022/12/22 15:03:45 by ogenc            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	char	*big1;
	char	*little1;
	size_t	i;
	size_t	x;

	i = 0;
	little1 = (char *)little;
	big1 = (char *)big;
	x = 0;
	while (big1 && x < len)
	{
		while (little1[i] != '\0')
		{
			if (little1[i] == big1[x])
			{
				i++;
				x++;
			}
			else
				i = 0;
		}
		big1++;
	}
	return ((char *)big + i);
}
