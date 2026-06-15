/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joagomes <joagomes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/20 15:01:46 by joagomes          #+#    #+#             */
/*   Updated: 2026/04/20 15:01:46 by joagomes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
	se c está entre 'A' e 'Z'
	retorna c + 32
	senão
	retorna c
*/

#include "libft.h"

int	ft_tolower(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (c + 32);
	return (c);
}
/*
int	main(void)
{
	char	c;
	c = 'j';
	c = ft_tolower(c);
	printf("%c\n", c);
	c = 'F';
	c = ft_tolower(c);
	printf("%c\n", c);
	return (0);
}
*/