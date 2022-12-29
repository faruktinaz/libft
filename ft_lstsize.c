/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ogenc <ogenc@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/29 12:05:17 by ogenc             #+#    #+#             */
/*   Updated: 2022/12/29 13:08:18 by ogenc            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	int	i;

	i = 0;
	while (lst != NULL)
	{
		i++;
		lst = lst->next;
	}
	return (i);
}

// int main()
// {
// 	t_list	*insan;
// 	insan = malloc(sizeof(t_list));
// 	insan->content = "deneme";
// 	insan->next = malloc(sizeof(t_list));
// 	insan->next->content = "araba";
// 	printf("%d",ft_lstsize(insan));
// }
