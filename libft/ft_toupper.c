/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joagomes <joagomes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/20 14:43:02 by joagomes          #+#    #+#             */
/*   Updated: 2026/04/20 15:00:01 by joagomes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
	se c está entre 'a' e 'z'
	retorna c - 32
	senão
	retorna c
*/

#include "libft.h"

int	ft_toupper(int c)
{
	if (c >= 'a' && c <= 'z')
		return (c - 32);
	return (c);
}
/*
int	main(void)
{
	char	c;
	c = 'j';
	c = ft_toupper(c);
	printf("%c\n", c);
	c = 'F';
	c = ft_toupper(c);
	printf("%c\n", c);
	return (0);
}
*/
