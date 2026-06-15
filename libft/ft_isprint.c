/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joagomes <joagomes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/15 17:37:24 by joagomes          #+#    #+#             */
/*   Updated: 2026/04/15 18:36:31 by joagomes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
Se o valor estiver no intervalo printavel na tabela ASCII padrao (32-126)
		retorna 1
	Senao
		retorna 0
*/

#include "libft.h"

int	ft_isprint(int c)
{
	return (c >= 32 && c <= 126);
}
/*
int	main(void)
{
	printf("%d\n", ft_isprint(' '));
	printf("%d\n", ft_isprint('$'));
	printf("%d\n", ft_isprint('3'));
	printf("%d\n", ft_isprint('\n'));
	printf("%d\n", ft_isprint('\0'));
	printf("%d\n", ft_isprint(31));
	printf("%d\n", ft_isprint(127));
	return (0);
}
*/
