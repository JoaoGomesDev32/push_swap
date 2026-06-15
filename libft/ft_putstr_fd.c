/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joagomes <joagomes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/25 09:37:07 by joaog             #+#    #+#             */
/*   Updated: 2026/04/27 12:23:36 by joagomes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
	Escreve uma string inteira no fd
		Calcula o tamanho com o ft_strlen
			passa o ponteiro s direto ao write
			s já é um endereco
*/

#include "libft.h"

void	ft_putstr_fd(char *s, int fd)
{
	int	len_s;

	len_s = ft_strlen(s);
	write(fd, s, len_s);
}
/*
int main(void)
{
	ft_putstr_fd("Felipe\n", 1);
	return (0);
}
*/
