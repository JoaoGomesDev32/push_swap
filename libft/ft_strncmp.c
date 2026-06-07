/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joagomes <joagomes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/18 16:22:02 by joagomes          #+#    #+#             */
/*   Updated: 2026/05/06 17:43:08 by joagomes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
Compara n caracteres de s1 e s2
retorna a diferença entre ambos ou zero se for igual.
	percorrer até n
	se caracteres diferentes → retorna diferença
	se chegar em '\0' → parar

	retorna 0
*/

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n && (s1[i] || s2[i]))
	{
		if (s1[i] != s2[i])
			return ((unsigned char)s1[i] - (unsigned char)s2[i]);
		if (s1[i] == '\0')
			break ;
		i++;
	}
	return (0);
}
/*
int	main(void)
{
	printf("%d\n", ft_strncmp("abc", "abc", 3));
	printf("%d\n", ft_strncmp("abc", "abd", 3));
	printf("%d\n", ft_strncmp("abc", "abb", 3));
	printf("%d\n", ft_strncmp("abc", "abcd", 4));
	return (0);
}
*/
