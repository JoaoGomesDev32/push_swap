/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joagomes <joagomes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/22 15:45:41 by joagomes          #+#    #+#             */
/*   Updated: 2026/05/09 18:09:11 by joagomes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
Cria uma nova string contendo uma parte da estring original
Aloca e devolve essa substring de s, iniciada em start
e com comprimento máximo len.
	calcular tamanho de s
	se start >= len_s
		retorna string vazia
	calcular tamanho real a copiar
	malloc (len + 1)
	copiar caracteres
	adicionar '\0'
*/

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	len_s;
	char	*ptr;

	if (!s)
		return (NULL);
	len_s = ft_strlen(s);
	if (start >= len_s)
		return (ft_strdup(""));
	if (len > len_s - start)
		len = len_s - start;
	ptr = malloc(sizeof(char) * (len + 1));
	if (!ptr)
		return (NULL);
	ft_strlcpy(ptr, s + start, len + 1);
	return (ptr);
}
/*
#include <stdio.h>
int main ()
{
	char *string = NULL;
	int start = 2;
	int len = 4;
	char *sub;
	sub = ft_substr(string, start,len);
	printf("%s",sub);
	free(sub);
}
*/