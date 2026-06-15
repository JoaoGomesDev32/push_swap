/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joagomes <joagomes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/25 09:06:43 by joaog             #+#    #+#             */
/*   Updated: 2026/04/27 12:11:10 by joagomes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
	Escreve unico caractere no file descriptor
		precisa do fd, endereco(&c) e quantos bytes
*/

#include "libft.h"

void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}
/*
int main(void)
{
	ft_putchar_fd('F', 1);
	ft_putchar_fd('\n', 1);
}
*/
