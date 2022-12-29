/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ogenc <ogenc@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/29 13:11:10 by ogenc             #+#    #+#             */
/*   Updated: 2022/12/29 13:21:33 by ogenc            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	while (lst != NULL)
	{
		if (lst->next == NULL)
			return (lst);
		else
			lst = lst->next;
	}
	return (lst);
}

// int main()
// {
// 	t_list	*insanlar;

// 	insanlar = malloc(sizeof(t_list));
// 	insanlar->content = "ahmet";
// 	insanlar->next = malloc(sizeof(t_list));
// 	insanlar = insanlar->next;
// 	insanlar->content = "mehmet";
// 	t_list *soninsan = ft_lstlast(insanlar);
// 	printf("%s", soninsan->content);
// }
