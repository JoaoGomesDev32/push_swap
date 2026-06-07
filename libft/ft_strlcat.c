/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joagomes <joagomes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/17 16:35:38 by joagomes          #+#    #+#             */
/*   Updated: 2026/05/06 17:38:23 by joagomes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
Concatena src ao fim de dest
evitando o estouro do buffer
retorna o comprimento total que tentou criar.
	Descobre tamanho de dst
	Se size <= len_dst:
		retorna size + ft_strlen(src)
	Senao:
		dst += src
		coloca '\0'
	Retorna tamanho de dst + tamanho de src
*/

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	len_dst;
	size_t	len_src;
	size_t	i;

	len_dst = ft_strlen(dst);
	len_src = ft_strlen(src);
	if (size <= len_dst)
		return (size + len_src);
	i = 0;
	while (src[i] && (len_dst + i) < size - 1)
	{
		dst[len_dst + i] = src[i];
		i++;
	}
	dst[len_dst + i] = '\0';
	return (len_dst + len_src);
}
/*
int	main(void)
{
	char	str1[12] = "Hello";
	char	str2[] = " World";
	ft_strlcat(str1, str2, 12);
	printf("%s", str1);
	return (0);
}
*/
