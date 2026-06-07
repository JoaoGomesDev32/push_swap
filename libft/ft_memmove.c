/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joagomes <joagomes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/17 12:47:32 by joagomes          #+#    #+#             */
/*   Updated: 2026/05/11 17:33:36 by joagomes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
Copia nBytes de src para dest,
manuseando memória sobreposta com segurança.
	Recebo dest, src e n
	Se dest == src
		Retornar dest
	Se dest > src
		copiar de trás para frente
	Senão
		copiar normalmente
	Retornar dest
*/

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t	i;

	if ((unsigned char *)dest == (unsigned char *)src || n == 0)
		return (dest);
	else if ((unsigned char *)dest > (unsigned char *)src)
	{
		i = n;
		while (i > 0)
		{
			((unsigned char *)dest)[i - 1] = ((unsigned char *)src)[i - 1];
			i--;
		}
	}
	else
	{
		i = 0;
		while (i < n)
		{
			((unsigned char *)dest)[i] = ((unsigned char *)src)[i];
			i++;
		}
	}
	return (dest);
}
/*
int	main(void)
{
	char	str[] = "ABCDE";
	char	res[10] = {0};
	ft_memmove(str + 1, str, 4);
	for (int i = 0; i < 5; i++)
	{
		printf("%c ", str[i]);
	}
	return (0);
}
*/