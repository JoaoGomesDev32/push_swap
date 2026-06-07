/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joagomes <joagomes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/15 16:22:49 by joagomes          #+#    #+#             */
/*   Updated: 2026/04/15 16:36:03 by joagomes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
	Se estiver entre '0' e '9'
		retorna 1
	Senao
		retorna 0
*/
#include "libft.h"

int	ft_isdigit(int c)
{
	return (c >= '0' && c <= '9');
}
/*
int main(void)
{
	printf("%d\n", ft_isdigit('5'));
	printf("%d\n", ft_isdigit('h'));
	printf("%d\n", ft_isdigit(' '));
	printf("%d\n", ft_isdigit('\t'));
	printf("%d\n", ft_isdigit('9'));
	return (0);
}
*/
