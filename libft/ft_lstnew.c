/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joagomes <joagomes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/27 12:38:41 by joagomes          #+#    #+#             */
/*   Updated: 2026/05/11 11:10:24 by joagomes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
Cria um novo no, aloca memoria, atribui conteudo e o next define como null
pois nao aponta para ninguem
*/

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*node;

	node = malloc(sizeof(t_list));
	if (!node)
		return (NULL);
	node->content = content;
	node->next = NULL;
	return (node);
}
/*
int main(void)
{
    t_list  *node;

    // Teste 1 — conteúdo normal
    node = ft_lstnew("hello");
    printf("Teste 1:\n");
    printf("  content: %s\n", (char *)node->content);
    printf("  next: %p\n", node->next);
    free(node);

    // Teste 2 — conteúdo inteiro
    int n = 42;
    node = ft_lstnew(&n);
    printf("Teste 2:\n");
    printf("  content: %d\n", *(int *)node->content);
    printf("  next: %p\n", node->next);
    free(node);

    // Teste 3 — conteúdo NULL
    node = ft_lstnew(NULL);
    printf("Teste 3:\n");
    printf("  content: %p\n", node->content);
    printf("  next: %p\n", node->next);
    free(node);

    return (0);
}
*/
