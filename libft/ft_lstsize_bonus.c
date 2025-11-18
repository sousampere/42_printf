/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gtourdia <@student.42mulhouse.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/05 17:18:44 by gtourdia          #+#    #+#             */
/*   Updated: 2025/11/07 17:26:56 by gtourdia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	int		i;
	t_list	*nextl;

	i = 0;
	if (lst == NULL)
		return (0);
	if (lst->next == NULL)
		return (1);
	nextl = lst->next;
	while (nextl->next != NULL)
	{
		i++;
		lst = lst->next;
		nextl = lst->next;
	}
	return (i + 2);
}

// #include <stdio.h>
// int main()
// {
// 	t_list * l =  NULL;
// 	ft_lstadd_front(&l, ft_lstnew((void*)1));
// 	ft_lstadd_front(&l, ft_lstnew((void*)2));
// 	printf("%d\n", ft_lstsize(l));
// }