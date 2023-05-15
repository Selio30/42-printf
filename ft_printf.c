/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbarbero <sbarbero@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/15 21:28:04 by sbarbero          #+#    #+#             */
/*   Updated: 2023/05/15 22:00:50 by sbarbero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_format_chech(va_list params, char c)
{
	if (c == 'c')
		return (ft_putchar(va_arg(params, int)));
	if (c == 's')
		return (ft_putstr(va_arg(params, char *)));
	return (0);
}

int	ft_printf(const char *str, ...)
{
	va_list	lst;
	int		i;
	int		c;

	i = 0;
	c = 0;
	va_start(lst, str);
	while (str[i])
	{
		if (str[i] != '%')
		{
			write(1, &str[i], 1);
			c++;
		}
		else
		{
			c = c + ft_format_chech(lst, str[i + 1]);
			i++;
		}
		i++;
	}
	va_end(lst);
	return (c);
}
