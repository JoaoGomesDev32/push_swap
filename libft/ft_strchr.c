/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joagomes <joagomes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/18 14:03:05 by joagomes          #+#    #+#             */
/*   Updated: 2026/05/06 17:39:55 by joagomes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
Retorna um ponteiro para a primeira ocorrência de c em s,
ou NULL se não for encontrado.
	percorrer a string
		se encontrar c -> retorna ponteiro
	se chegar no final:
		se c == '\0' -> retorna ponteiro final
	senao -> NULL
*/

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int	i;

	i = 0;
	while (s[i])
	{
		if ((unsigned char)s[i] == (unsigned char)c)
			return ((char *)&s[i]);
		i++;
	}
	if ((char)c == '\0')
		return ((char *)&s[i]);
	return (NULL);
}
/*
int	main(void)
{
	char *str = "abcde";
	char	*res;

	res = ft_strchr(str, 'c');
	printf("%s\n", res);

	res = ft_strchr(str, 'z');
	if (res)
		printf("%s\n", res);
	else
		printf("NULL\n");

	res = ft_strchr(str, '\0');
	printf("%s\n", res);

	return 0;
}
*/
