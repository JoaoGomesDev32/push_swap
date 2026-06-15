/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joagomes <joagomes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/20 16:05:05 by joagomes          #+#    #+#             */
/*   Updated: 2026/05/11 16:26:24 by joagomes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
ft_calloc aloca memória e inicializa tudo com zero.
	ft_calloc - aloca nmemb * size bytes inicializados a zero
	[nmemb=0 ou size=0] → malloc(0) → ponteiro válido para free()
	[overflow check]    → nmemb > SIZE_MAX/size → NULL
	[malloc]           → aloca nmemb * size bytes
	[bzero]            → preenche tudo com 0
	[return]           → ponteiro para memória limpa
*/

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	char	*ptr;

	if (size != 0 && nmemb > SIZE_MAX / size)
		return (NULL);
	ptr = malloc(sizeof(char) * (nmemb * size));
	if (!ptr)
		return (NULL);
	ft_bzero(ptr, nmemb * size);
	return ((char *)ptr);
}
/*
int main(void)
{
    int     *arr;
    char    *str;
    void    *zero;
    int     i;

    // Teste 1 — alocar array de 5 inteiros
    arr = (int *)ft_calloc(5, sizeof(int));
    if (!arr)
        return (1);
    i = 0;
    printf("Teste 1 - array de 5 inteiros:\n");
    while (i < 5)
    {
        printf("arr[%d] = %d\n", i, arr[i]);
        i++;
    }
    free(arr);

    // Teste 2 — alocar string de 10 chars
    str = (char *)ft_calloc(10, sizeof(char));
    if (!str)
        return (1);
    printf("\nTeste 2 - string de 10 chars:\n");
    i = 0;
    while (i < 10)
    {
        printf("str[%d] = %d\n", i, str[i]);
        i++;
    }
    free(str);

    // Teste 3 — nmemb = 0
    zero = ft_calloc(0, sizeof(int));
    printf("\nTeste 3 - nmemb=0: ponteiro %s\n",
        zero ? "valido" : "NULL");
    free(zero);

    // Teste 4 — size = 0
    zero = ft_calloc(5, 0);
    printf("Teste 4 - size=0: ponteiro %s\n",
        zero ? "valido" : "NULL");
    free(zero);

    return (0);
}
*/
