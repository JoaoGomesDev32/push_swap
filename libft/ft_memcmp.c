/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joagomes <joagomes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/19 11:37:27 by joaog             #+#    #+#             */
/*   Updated: 2026/05/06 16:08:02 by joagomes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
Compara os primeiros nbytes de s1 e s2.
Retorna um valor negativo, zero ou positivo,
dependendo da comparação.
	Enquanto percorre s1 ou s2 e o indice for menor que n
		se s1 for diferente de s2
			retorna a diferenca
	retorna 0
*/

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*str1;
	unsigned char	*str2;
	size_t			i;

	str1 = (unsigned char *)s1;
	str2 = (unsigned char *)s2;
	i = 0;
	while (i < n)
	{
		if (str1[i] != str2[i])
			return ((unsigned char)str1[i] - (unsigned char)str2[i]);
		i++;
	}
	return (0);
}
/*
int	main(void)
{
	char a[] = {'a', 'b', '\0', 'd'};
	char b[] = {'a', 'b', '\0', 'c'};

	printf("%d\n", ft_memcmp(a, b, 4));
	return (0);
}
*/
