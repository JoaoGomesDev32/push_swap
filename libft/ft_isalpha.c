/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joagomes <joagomes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/15 14:39:33 by joagomes          #+#    #+#             */
/*   Updated: 2026/04/15 16:15:09 by joagomes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
	Se estiver entre 'A' a 'Z'
	OU
	Se estiver entre 'a' a 'z'
			retorna 1
	senao retorna 0 
*/

#include "libft.h"

int	ft_isalpha(int c)
{
	return ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'));
}
/*
int	main(void)
{
	printf("%d\n", ft_isalpha('a'));
	printf("%d\n", ft_isalpha('Z'));
	printf("%d\n", ft_isalpha('1'));
	printf("%d\n", ft_isalpha(' '));
	printf("%d\n", ft_isalpha('\n'));
	return (0);
}
*/
