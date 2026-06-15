/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joagomes <joagomes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/15 16:43:19 by joagomes          #+#    #+#             */
/*   Updated: 2026/04/15 16:56:39 by joagomes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
	Se estiver entre 'A' e 'Z'
	OU
	Se estiver entre 'a' e 'z'
	OU
	Se estiver entre '0' e '9'
		retorna 1
	Senao
		retorna 0
*/

#include "libft.h"

int	ft_isalnum(int c)
{
	return ((c >= 'A' && c <= 'Z')
		|| (c >= 'a' && c <= 'z')
		|| (c >= '0' && c <= '9'));
}
/*
int main(void)
{
	printf("%d\n", ft_isalnum('5'));
	printf("%d\n", ft_isalnum('h'));
	printf("%d\n", ft_isalnum(' '));
	printf("%d\n", ft_isalnum('\t'));
	printf("%d\n", ft_isalnum('9'));
	return (0);
}
*/
