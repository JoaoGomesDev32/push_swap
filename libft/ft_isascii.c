/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joagomes <joagomes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/15 17:03:16 by joagomes          #+#    #+#             */
/*   Updated: 2026/04/15 17:33:31 by joagomes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
	Se o valor estiver no intervalo tabela ASCII padrao (0-127)
		retorna 1
	Senao
		retorna 0
*/

#include "libft.h"

int	ft_isascii(int c)
{
	return (c >= 0 && c <= 127);
}
/*
int	main(void)
{
	printf("%d\n", ft_isascii('A'));
	printf("%d\n", ft_isascii('$'));
	printf("%d\n", ft_isascii(200));
	printf("%d\n", ft_isascii('\n'));
	printf("%d\n", ft_isascii(127));
	printf("%d\n", ft_isascii(0));
	printf("%d\n", ft_isascii(128));
	return (0);
}
*/
