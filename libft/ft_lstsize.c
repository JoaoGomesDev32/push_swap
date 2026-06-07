/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joagomes <joagomes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/27 15:41:04 by joagomes          #+#    #+#             */
/*   Updated: 2026/05/11 16:49:57 by joagomes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
retorna o numero de nos da lista
*/

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	int		len_lst;

	len_lst = 0;
	while (lst != NULL)
	{
		len_lst++;
		lst = lst->next;
	}
	return (len_lst);
}
/*
int main(void)
{
	{
		t_list  *lst;
		t_list  *node;
		int len;
	
		lst = ft_lstnew("world");
		node = ft_lstnew("hello");
		ft_lstadd_back(&lst, node);
		len = ft_lstsize(lst);
		printf("Tamanho: %d\n", len);
		free(lst->next);
		free(lst);
		return (0);
	}
}
*/
