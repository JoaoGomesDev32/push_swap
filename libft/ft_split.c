/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joagomes <joagomes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/23 11:29:48 by joagomes          #+#    #+#             */
/*   Updated: 2026/05/09 18:30:42 by joagomes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
Separa uma string em várias substrings
usando um delimitador.
** ft_split - divide 's' em array de strings usando 'c' como delimitador
**
** [count_words] → conta palavras ignorando delimitadores consecutivos
** [malloc]      → aloca array com count_words + 1 posições (NULL final)
** [loop]        → para cada palavra:
**                 start = início da palavra
**                 avança até c ou '\0'
**                 arr[j] = ft_substr(s, start, i - start)
** [NULL]        → termina o array com NULL
*/

#include "libft.h"

static int	count_words(char const *s, char c)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (s[i])
	{
		if (s[i] != c && (i == 0 || s[i - 1] == c))
			count++;
		i++;
	}
	return (count);
}

static void	free_all(char **arr, int j)
{
	while (j > 0)
		free(arr[--j]);
	free(arr);
}

static int	fill_array(char **arr, char const *s, char c)
{
	int	i;
	int	j;
	int	start;

	i = 0;
	j = 0;
	while (s[i])
	{
		if (s[i] != c)
		{
			start = i;
			while (s[i] && s[i] != c)
				i++;
			arr[j] = ft_substr(s, start, i - start);
			if (!arr[j])
				return (free_all(arr, j), 0);
			j++;
		}
		else
			i++;
	}
	arr[j] = NULL;
	return (1);
}

char	**ft_split(char const *s, char c)
{
	char	**arr;

	if (!s)
		return (NULL);
	arr = malloc(sizeof(char *) * (count_words(s, c) + 1));
	if (!arr)
		return (NULL);
	if (!fill_array(arr, s, c))
		return (NULL);
	return (arr);
}
/*
#include <stdio.h>
int main(void)
{
    char    **res;
    int     i;

    // Teste 1 — caso normal
    res = ft_split("hello world foo", ' ');
    i = 0;
    printf("Teste 1:\n");
    while (res[i])
    {
        printf("  [%d] = '%s'\n", i, res[i]);
        free(res[i]);
        i++;
    }
    free(res);

    // Teste 2 — delimitadores consecutivos
    res = ft_split(",,hello,,world,,", ',');
    i = 0;
    printf("Teste 2:\n");
    while (res[i])
    {
        printf("  [%d] = '%s'\n", i, res[i]);
        free(res[i]);
        i++;
    }
    free(res);

    // Teste 3 — string vazia
    res = ft_split("", ' ');
    i = 0;
    printf("Teste 3:\n");
    while (res[i])
    {
        printf("  [%d] = '%s'\n", i, res[i]);
        free(res[i]);
        i++;
    }
    free(res);

    // Teste 4 — sem delimitadores
    res = ft_split("hello", ' ');
    i = 0;
    printf("Teste 4:\n");
    while (res[i])
    {
        printf("  [%d] = '%s'\n", i, res[i]);
        free(res[i]);
        i++;
    }
    free(res);

	// Teste 5 — NULL
	res = ft_split(NULL, ' ');
	printf("Teste 5:\n");
	if (res)	{
		while (res[i])		{
			printf("  [%d] = '%s'\n", i, res[i]);
			free(res[i]);
			i++;
		}
		free(res);
	}
	else
		printf("  NULL\n");

    return (0);
}
*/