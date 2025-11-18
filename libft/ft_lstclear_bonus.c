/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear_bonus.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gtourdia <@student.42mulhouse.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/06 10:24:15 by gtourdia          #+#    #+#             */
/*   Updated: 2025/11/07 16:56:38 by gtourdia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// void	ft_lstclear(t_list **lst, void (*del)(void *))
// {
// 	if (lst[0]->next != NULL)
// 		ft_lstclear(&lst[0]->next, del);
// 	ft_lstdelone(lst[0], del);
// }

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*ptr;
	t_list	*nptr;

	if (lst == NULL || del == NULL)
		return ;
	ptr = lst[0];
	while (ptr->next != NULL)
	{
		nptr = ptr->next;
		ft_lstdelone(ptr, del);
		ptr = nptr;
	}
	ft_lstdelone(ptr, del);
	*lst = NULL;
}

// int main()
// {
// 	t_list * l =  ft_lstnew(malloc(100));
// 	for (int i = 0; i < 10; ++i)
// 	{
// 		ft_lstadd_front(&l, ft_lstnew(malloc(100)));
// 		l->content = "test";
// 	}
// 	ft_lstclear(&l, free);
// 	return 0;
// }
