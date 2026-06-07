/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joagomes <joagomes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/27 11:19:08 by joagomes          #+#    #+#             */
/*   Updated: 2026/05/08 10:53:18 by joagomes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
Escreve o número inteiro n 
como uma string para fd
	Converte n para long(tratar o INT_MIN sem overflow)
	Se negativo
		escreve o '-'com ft_putchar_fd e torna nb positivo
	delega o resto a funcao auxiliar putnbr
	Se n >= 10 
		chama a si propria com n / 10 desce ate o primeiro digito
	Escreve cada digito com ft_putchar_fd a medida que  a recursao volta
*/

#include "libft.h"

static	void	putnbr(long n, int fd)
{
	if (n >= 10)
		putnbr(n / 10, fd);
	ft_putchar_fd((n % 10) + '0', fd);
}

void	ft_putnbr_fd(int n, int fd)
{
	long	nb;

	nb = (long)n;
	if (n < 0)
	{
		ft_putchar_fd('-', fd);
		nb = -nb;
	}
	putnbr(nb, fd);
}
/*
int main(void)
{
    ft_putnbr_fd(123, 1);
    write(1, "\n", 1);
    ft_putnbr_fd(-42, 1);
    write(1, "\n", 1);
    ft_putnbr_fd(0, 1);
    write(1, "\n", 1);
    ft_putnbr_fd(-2147483648, 1);
    write(1, "\n", 1);
    ft_putnbr_fd(2147483647, 1);
    write(1, "\n", 1);
    return (0);
}
*/
