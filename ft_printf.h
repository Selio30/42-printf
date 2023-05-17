/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbarbero <sbarbero@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/15 21:25:39 by sbarbero          #+#    #+#             */
/*   Updated: 2023/05/17 20:05:36 by sbarbero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

/* Include libraries */

# include <stdlib.h>
# include <stdarg.h>
# include <unistd.h>

int		ft_printf(char const *str, ...);

int		ft_putchar(char c);

int		ft_putstr(char *str);

int		ft_putptr(long unsigned int ptr);

int		ft_puthexa(unsigned long long num, int capital);

int		ft_putnbr(int nb);

char	*ft_itoa(int n);

int		ft_putnbr2(unsigned int nb);

char	*ft_itoa2(unsigned int n);

#endif