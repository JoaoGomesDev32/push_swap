/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joagomes <joagomes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/28 12:08:54 by joagomes          #+#    #+#             */
/*   Updated: 2026/05/11 16:36:48 by joagomes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
Percorre a lista e aplica a função f ao conteúdo de cada nó.
*/

#include "libft.h"

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	if (!lst || !f)
		return ;
	while (lst != NULL)
	{
		f(lst->content);
		lst = lst->next;
	}
}
/*
void    print_upper(void *content)
{
    char    *str;
    int     i;

    str = (char *)content;
    i = 0;
    while (str[i])
    {
        if (str[i] >= 'a' && str[i] <= 'z')
            str[i] -= 32;
        i++;
    }
    printf("%s\n", str);
}

void    del(void *content)
{
    free(content);
}

int	main(void)
{
	t_list	*lst;

	lst = ft_lstnew(ft_strdup("hello"));
	ft_lstadd_back(&lst,ft_lstnew(ft_strdup("world")));
	ft_lstiter(lst, print_upper);
	ft_lstclear(&lst, del);
	return (0);
}
*/