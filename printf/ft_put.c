/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_put.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbarbero <sbarbero@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/16 23:46:35 by sbarbero          #+#    #+#             */
/*   Updated: 2023/05/17 00:17:14 by sbarbero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putchar(char c)
{
	write(1, &c, 1);
	return (1);
}

int	ft_putstr(char *str)
{
	int	i;

	i = 0;
	if (!str)
	{
		write(1, "(null)", 6);
		return (6);
	}
	while (str[i])
		i++;
	write(1, str, i);
	return (i);
}

int	ft_putptr(unsigned long ptr)
{
	int	i;

	i = 2;
	write(1, "0x", 2);
	i += ft_puthexa(ptr, 0);
	return (i);
}

int	ft_puthexa(unsigned long long num, int capital)
{
	unsigned long long	i;

	i = 0;
	if (num >= 16)
		i += ft_puthexa(num / 16, capital);
	if (capital == 0)
		ft_putchar("0123456789abcdef"[num % 16]);
	else
		ft_putchar("0123456789ABCDEF"[num % 16]);
	i++;
	return (i);
}
