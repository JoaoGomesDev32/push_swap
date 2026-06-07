/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joagomes <joagomes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/25 08:31:03 by joaog             #+#    #+#             */
/*   Updated: 2026/05/09 16:55:17 by joagomes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
Percorre e aplica a função f a cada caractere de s,
da string original
1. percorre s com índice i
2. chama f(i, &s[i])  ← endereço do caracter
3. retorna void
*/

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	unsigned int	i;

	i = 0;
	if (!s || !f)
		return ;
	while (s[i])
	{
		f(i, &s[i]);
		i++;
	}
}
/*
static void	ft_toupper_indexed(unsigned int i, char *c)
{
    if (i % 2 == 0 && *c >= 'a' && *c <= 'z')
        *c -= 32;
}

#include <stdio.h>
int main(void)
{
    char str1[] = "hello";
    char str2[] = "";
    char str3[] = "hello world";
	char *null_str = NULL;

    // Teste 1 — toupper nos índices pares
    ft_striteri(str1, ft_toupper_indexed);
    printf("Teste 1: %s\n", str1);

    // Teste 2 — string vazia
    ft_striteri(str2, ft_toupper_indexed);
    printf("Teste 2: '%s'\n", str2);

    // Teste 3 — frase
    ft_striteri(str3, ft_toupper_indexed);
    printf("Teste 3: %s\n", str3);

	// Teste 4 — ponteiro nulo
	ft_striteri(null_str, ft_toupper_indexed);
	printf("Teste 4: %s\n", null_str);

    return (0);
}
*/