/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joagomes <joagomes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/22 11:37:16 by joagomes          #+#    #+#             */
/*   Updated: 2026/05/11 16:20:58 by joagomes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
Converte a parte inicial de string para um número inteiro,
ignorando o espaços em branco
gera o sinal.
	Enquanto o caractere for whitespace
		avanca...
	se o caracter for '-' ou '+'
		guarda o sinal
	enquanto o caractere for digito
		resultado comeca em zero * 10 + digito atual
	retorna resultado 
*/

#include "libft.h"

int	ft_atoi(const char *nptr)
{
	int	i;
	int	sign;
	int	result;

	i = 0;
	while ((nptr[i] == ' ') || (nptr[i] >= 9 && nptr[i] <= 13))
		i++;
	sign = 1;
	if (nptr[i] == '-' || nptr[i] == '+')
	{
		if (nptr[i] == '-')
			sign = -1;
		i++;
	}
	result = 0;
	while (ft_isdigit(nptr[i]))
	{
		result = result * 10 + (nptr[i] - '0');
		i++;
	}
	return (result * sign);
}
/*
int	main(void)
{
	char *str;
	int	res;

	str = "42";
	res = ft_atoi(str);
	printf("%d\n", res);
	str = "-42";
	res = ft_atoi(str);
	printf("%d\n", res);
	str = "+42";
	res = ft_atoi(str);
	printf("%d\n", res);
	str = "		42";
	res = ft_atoi(str);
	printf("%d\n", res);
	str = "42abc";
	res = ft_atoi(str);
	printf("%d\n", res);
	str = "abc";
	res = ft_atoi(str);
	printf("%d\n", res);
	return (0);
}
*/