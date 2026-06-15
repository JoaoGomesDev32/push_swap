/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joagomes <joagomes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/20 13:17:53 by joagomes          #+#    #+#             */
/*   Updated: 2026/05/11 18:30:27 by joagomes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
Aloca nova memória e retorna uma duplicata da string src
	len = strlen(s)
	alocar len + 1
	copiar caracteres
	colocar '\0'
	retornar nova string
*/

#include "libft.h"

char	*ft_strdup(const char *s)
{
	char	*copy;
	size_t	len;

	len = ft_strlen(s);
	copy = (char *)malloc(sizeof(char) * (len + 1));
	if (!copy)
		return (NULL);
	ft_memcpy(copy, s, len);
	copy[len] = '\0';
	return (copy);
}
/*
#include <stdio.h>
int	main(void)
{
	char	*src = "42 Portugal";
	char	*dest = ft_strdup(src);

	printf("%s\n", dest);
	free(dest);
	return (0);
}
*/