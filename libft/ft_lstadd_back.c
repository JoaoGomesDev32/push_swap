/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joagomes <joagomes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/27 14:20:01 by joagomes          #+#    #+#             */
/*   Updated: 2026/05/11 18:23:50 by joagomes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
adiciona um novo no no final da lista
*/

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*current;

	if (!new)
		return ;
	if (!*lst)
	{
		*lst = new;
		return ;
	}
	current = ft_lstlast(*lst);
	current->next = new;
}
/*
int main(void)
{
	{
		t_list  *lst;
		t_list  *node;
	
		lst = ft_lstnew("world");
		node = ft_lstnew("hello");
		ft_lstadd_back(&lst, node);
		printf("primeiro: %s\n", (char *)lst->content);
		printf("segundo: %s\n", (char *)lst->next->content);
		free(lst->next);
		free(lst);
		return (0);
	}
}
*/
