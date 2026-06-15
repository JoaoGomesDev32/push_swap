/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joagomes <joagomes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/27 10:58:42 by joagomes          #+#    #+#             */
/*   Updated: 2026/04/27 12:15:42 by joagomes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
	Escreve uma string inteira no fd
	Calcula o tamanho com o ft_strlen
		passa o ponteiro s direto ao write
		s já é um endereco
	Add uma newline no final com um segundo write
	("\n" é uma string de 1 caractere)
*/

#include "libft.h"

void	ft_putendl_fd(char *s, int fd)
{
	int	len_s;

	len_s = ft_strlen(s);
	write (fd, s, len_s);
	write (fd, "\n", 1);
}
/*
int	main(void)
{
	char	*str = "42 Lisboa";
	ft_putendl_fd(str, 1);
	printf("%s", str);
	return (0);
}
*/