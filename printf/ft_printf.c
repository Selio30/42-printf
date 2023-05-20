/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbarbero <sbarbero@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/15 21:28:04 by sbarbero          #+#    #+#             */
/*   Updated: 2023/05/17 20:07:48 by sbarbero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_format_chech(va_list obj, const char c, int count)
{
	if (c == 'c')
		count += ft_putchar(va_arg(obj, int));
	if (c == 's')
		count += ft_putstr(va_arg(obj, char *));
	if (c == 'p')
		count += ft_putptr(va_arg(obj, unsigned long));
	if (c == 'd' || c == 'i')
		count += ft_putnbr(va_arg(obj, int));
	if (c == 'u')
		count += ft_putnbr2(va_arg(obj, unsigned int));
	if (c == 'x')
		count += ft_puthexa(va_arg(obj, unsigned int), 0);
	if (c == 'X')
		count += ft_puthexa(va_arg(obj, unsigned int), 1);
	if (c == '%')
		count += ft_putchar('%');
	return (count);
}

int	ft_printf(const char *str, ...)
{
	va_list	lst;
	int		i;
	int		c;
	int		count;

	i = 0;
	c = 0;
	count = 0;
	va_start(lst, str);
	while (str[i])
	{
		if (str[i] != '%')
		{
			c += ft_putchar(str[i]);
		}
		else
		{
			c += ft_format_chech(lst, str[i + 1], count);
			i++;
		}
		i++;
	}
	va_end(lst);
	return (c);
}
