/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joagomes <joagomes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/23 15:06:17 by joagomes          #+#    #+#             */
/*   Updated: 2026/05/06 17:54:30 by joagomes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
Converte o número inteiro n para uma string
alocando memoria e retornando o ponteiro.
1. converte n para long
2. conta os dígitos (+ 1 se negativo para o '-')
3. aloca memória
4. preenche da direita para a esquerda com n % 10 + '0'
5. divide n por 10
6. se negativo, coloca '-' no início
*/

#include "libft.h"

static int	count_digits(long n)
{
	int	count;

	count = 0;
	if (n <= 0)
		count = 1;
	if (n < 0)
		n = -n;
	while (n > 0)
	{
		count++;
		n /= 10;
	}
	return (count);
}

char	*ft_itoa(int n)
{
	long	nb;
	char	*res;
	int		count;
	int		i;

	nb = (long)n;
	count = count_digits(n);
	if (nb < 0)
		nb = -nb;
	res = malloc(sizeof (char) * (count + 1));
	if (!res)
		return (NULL);
	res[count] = '\0';
	i = count - 1;
	while (i >= 0)
	{
		res[i] = (nb % 10) + '0';
		nb /= 10;
		i--;
	}
	if (n < 0)
		res[0] = '-';
	return (res);
}
/*
int	main(void)
{
	int	n;
	char *res;

	n = 42;
	res = ft_itoa(n);
	printf("%s\n", res);
	free(res);
	n = -42;
	res = ft_itoa(n);
	printf("%s\n", res);
	free(res);
	n = 0;
	res = ft_itoa(n);
	printf("%s\n", res);
	free(res);
	n = 2147483647;
	res = ft_itoa(n);
	printf("%s\n", res);
	free(res);
	n = -2147483648;
	res = ft_itoa(n);
	printf("%s\n", res);
	free(res);
	return (0);
}
*/