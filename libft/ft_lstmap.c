/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joagomes <joagomes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/28 12:30:16 by joagomes          #+#    #+#             */
/*   Updated: 2026/05/11 16:42:29 by joagomes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
Criar uma NOVA lista ligada aplicando uma função
em cada elemento da lista original.
nova_lista = NULL
enquanto lst != NULL:
    1. aplica f ao conteúdo do nó actual
    2. cria novo nó com ft_lstnew
    3. se ft_lstnew falhar:
        ft_lstclear(&nova_lista, del)  ← liberta tudo
        return (NULL)
    4. adiciona novo nó ao fim com ft_lstadd_back
    5. avança para o próximo nó
retorna nova_lista
*/

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new_lst;
	t_list	*node;

	if (!lst || !f || !del)
		return (NULL);
	new_lst = NULL;
	while (lst != NULL)
	{
		node = ft_lstnew(f(lst->content));
		if (!node)
		{
			ft_lstclear(&new_lst, del);
			return (NULL);
		}
		ft_lstadd_back(&new_lst, node);
		lst = lst->next;
	}
	return (new_lst);
}
/*
void    *to_upper(void *content)
{
    char    *str;
    char    *new;
    int     i;

    str = (char *)content;
    new = ft_strdup(str);
    i = 0;
    while (new[i])
    {
        if (new[i] >= 'a' && new[i] <= 'z')
            new[i] -= 32;
        i++;
    }
    return (new);
}

void    del(void *content)
{
    free(content);
}

int main(void)
{
    t_list  *lst;
    t_list  *new_lst;
    t_list  *current;

    lst = ft_lstnew(ft_strdup("hello"));
    ft_lstadd_back(&lst, ft_lstnew(ft_strdup("world")));
    ft_lstadd_back(&lst, ft_lstnew(ft_strdup("42lisboa")));

    printf("lista original:\n");
    current = lst;
    while (current)
    {
        printf("  %s\n", (char *)current->content);
        current = current->next;
    }

    new_lst = ft_lstmap(lst, to_upper, del);

    printf("lista nova:\n");
    current = new_lst;
    while (current)
    {
        printf("  %s\n", (char *)current->content);
        current = current->next;
    }

    ft_lstclear(&lst, del);
    ft_lstclear(&new_lst, del);
    return (0);
}
*/