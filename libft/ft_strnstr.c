/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joagomes <joagomes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/20 11:56:18 by joagomes          #+#    #+#             */
/*   Updated: 2026/05/06 17:47:14 by joagomes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
localizar uma substring dentro de outra string,
mas com um limite de segurança de caracteres a serem verificados
	se little está vazia → retorna big

	para cada i:
		enquanto j:
			se caracteres diferentes → parar
		se terminou little → encontrou → retorna &big[i]

	retorna NULL
*/

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	j;

	if (*little == '\0')
		return ((char *)big);
	i = 0;
	while (big[i] && i < len)
	{
		j = 0;
		while (little[j] && i + j < len && big[i + j] == little[j])
			j++;
		if (little[j] == '\0')
			return ((char *)&big[i]);
		i++;
	}
	return (NULL);
}
/*
int	main(void)
{
	char *res;

	res = ft_strnstr("Hello World", "World", 11);
	if (res)
		printf("%s\n", res);
	else
		printf("NULL\n");

	res = ft_strnstr("Hello World", "World", 5);
	if (res)
		printf("%s\n", res);
	else
		printf("NULL\n");

	return (0);
}
*/
