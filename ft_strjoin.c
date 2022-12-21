/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ogenc <ogenc@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/17 13:51:53 by ogenc             #+#    #+#             */
/*   Updated: 2022/12/19 17:11:32 by ogenc            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*str1;
	char	*str2;
	size_t	lens1;
	size_t	lens2;

	if (!s1 || !s2)
		return (NULL);
	lens1 = ft_strlen(s1);
	lens2 = ft_strlen(s2);
	str1 = malloc(sizeof(char) * (lens1 + lens2 + 1));
	str2 = malloc(sizeof(char) * (lens2 + 1));
	if (str1 != NULL)
	{
		ft_strlcpy(str1, s1, lens1 + 1);
		ft_strlcpy(str2, s2, lens2 + 1);
		ft_strlcat(str1, str2, lens1 + lens2 + 1);
	}
	return (str1);
}
