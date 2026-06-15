/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joagomes <joagomes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/22 17:55:01 by joagomes          #+#    #+#             */
/*   Updated: 2026/05/09 17:01:54 by joagomes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
Aloca e devolve uma cópia de s1
com caracteres em set
removidos desde o início e o fim.
** ft_strtrim - remove caracteres de 'set' do inicio e fim de 's1'
**
** [start] → avança enquanto s1[start] existir em set
** [end]   → recua enquanto s1[end] existir em set
** [vazia] → se toda a string for set → retorna ""
** [return] → ft_substr da parte valida entre start e end
*/

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	int	start;
	int	end;

	if (!s1)
		return (NULL);
	if (!set)
		return (ft_strdup(s1));
	start = 0;
	end = ft_strlen(s1) - 1;
	while (ft_strchr(set, s1[start]))
		start++;
	while (end > start && ft_strchr(set, s1[end]))
		end--;
	if (start == end && ft_strchr(set, s1[start]))
		return (ft_substr(s1, 0, 0));
	return (ft_substr(s1, start, end - start + 1));
}
/*
#include <stdio.h>
int main(void)
{
    char *res;

    // Teste 1 — espaços
    res = ft_strtrim("   Hello, World!   ", " ");
    printf("Teste 1: '%s'\n", res);
    free(res);

    // Teste 2 — caracteres especiais
    res = ft_strtrim("##Hello##", "#");
    printf("Teste 2: '%s'\n", res);
    free(res);

    // Teste 3 — multiplos caracteres no set
    res = ft_strtrim("##Hello##", "#H");
    printf("Teste 3: '%s'\n", res);
    free(res);

    // Teste 4 — string toda de set
    res = ft_strtrim("###", "#");
    printf("Teste 4: '%s'\n", res);
    free(res);

    // Teste 5 — set vazio
    res = ft_strtrim("Hello", "");
    printf("Teste 5: '%s'\n", res);
    free(res);

	// Teste 6 — NULL
	res = ft_strtrim(NULL, NULL);
	printf("Teste 6: '%s'\n", res);
	free(res);

    return (0);
}
*/