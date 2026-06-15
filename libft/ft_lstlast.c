/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joagomes <joagomes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/27 16:04:35 by joagomes          #+#    #+#             */
/*   Updated: 2026/05/11 16:37:47 by joagomes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
retorna o ultimo no da lista
*/

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	if (!lst)
		return (NULL);
	while (lst->next != NULL)
		lst = lst->next;
	return (lst);
}
/*
int main(void)
{
    t_list  *lst;
    t_list  *node;
    t_list  *last;

    // Teste 1 — lista com 3 nós
    lst = ft_lstnew(ft_strdup("primeiro"));
    ft_lstadd_back(&lst, ft_lstnew(ft_strdup("segundo")));
    ft_lstadd_back(&lst, ft_lstnew(ft_strdup("terceiro")));
    last = ft_lstlast(lst);
    printf("Teste 1 - ultimo: %s\n", (char *)last->content);
    ft_lstclear(&lst, free);

    // Teste 2 — lista com 1 nó
    node = ft_lstnew(ft_strdup("unico"));
    last = ft_lstlast(node);
    printf("Teste 2 - ultimo: %s\n", (char *)last->content);
    ft_lstclear(&node, free);

    // Teste 3 — lista NULL
    last = ft_lstlast(NULL);
    printf("Teste 3 - ultimo: %p\n", last);

    return (0);
}
*/
