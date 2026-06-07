/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joagomes <joagomes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/28 10:25:37 by joagomes          #+#    #+#             */
/*   Updated: 2026/05/11 11:03:08 by joagomes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
	Exclui um unico no usando a funcao del sobre o seu conteudo
	e liberta o no
*/

#include "libft.h"

void	ft_lstdelone(t_list *lst, void (*del)(void *))
{
	if (!lst || !del)
		return ;
	del(lst->content);
	free(lst);
}
/*
void	del(void *content)
{
	free(content);
}

int	main(void)
{
	t_list	*lst;

	lst = ft_lstnew(ft_strdup("Hello!"));
	printf("antes: %s\n", (char *)lst->content);
	ft_lstdelone(lst, del);
	printf("libertado!\n");
	return (0);
}
*/