/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ogenc <ogenc@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/27 15:10:48 by ogenc             #+#    #+#             */
/*   Updated: 2022/12/27 18:37:17 by ogenc            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_countchar(const char *s, char c, int opt_delimit)
{
	size_t	i;

	i = 0;
	if (opt_delimit)
	{
		while (s[i] && s[i] != c)
			i++;
	}
	else
	{
		while (s[i] && s[i] == c)
			i++;
	}
	return (i);
}

static size_t	ft_kelimesayisi(const char *str, char c)
{
	size_t	i;
	size_t	kelime_sayisi;

	i = 0;
	kelime_sayisi = 0;
	while (str[i] != '\0' && str[i] == c)
		i++;
	while (str[i] != '\0')
	{
		while (str[i] != '\0' && str[i] != c)
			i++;
		kelime_sayisi++;
		while (str[i] != '\0' && str[i] == c)
			i++;
	}
	return (kelime_sayisi);
}


// int	main(void)
// {
// 	const char	src[] = "-tarik-yildirim-istanbul-42-türkiye-";
// 	char	c = '-';
// 	char	**dizi;
// 	dizi = ft_split(src, c);
// 	size_t	i = 0;
// 	while (dizi[i])
// 	{
// 		printf("%c\n", dizi[i]);
// 		i++;
// 	}
// }

