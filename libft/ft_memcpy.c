/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joagomes <joagomes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/17 11:14:08 by joagomes          #+#    #+#             */
/*   Updated: 2026/05/11 18:19:13 by joagomes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
Copia nbytes da área da memória src para dest.
As áreas de memória não devem se sobrepor.
	Recebo um endereco de memoria (src)
	Para cada byte ate n:
		substituir cada byte de dest pelos bytes em src
	Retornar o ponteiro dest
*/

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char		*dest_cpy;
	const unsigned char	*src_cpy;

	dest_cpy = (unsigned char *)dest;
	src_cpy = (const unsigned char *)src;
	if (dest == src || n == 0)
		return (dest);
	while (n)
	{
		*dest_cpy++ = *src_cpy++;
		n--;
	}
	return (dest);
}
/*
int	main(void)
{
	char	str[10] = "0123456789";
	char	result[10] = {0};
	ft_memcpy(result, str, 9);
	for(int i = 0; i < 10; i++)
	{
		printf("%c ", result[i]);
	}
	return (0);
}
*/
