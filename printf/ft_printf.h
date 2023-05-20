/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbarbero <sbarbero@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/15 21:25:39 by sbarbero          #+#    #+#             */
/*   Updated: 2023/05/18 19:20:50 by sbarbero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

/* Include libraries */

# include <stdlib.h>
# include <stdarg.h>
# include <unistd.h>

/**
 * @brief Is the main function. It works as printf function
 * 
 * @param str 
 * @param ... 
 * @return int Number of characters printed
 */
int		ft_printf(char const *str, ...);
/**
 * @brief Prints the C character
 * 
 * @param c 
 * @return int Number of characters printed
 */
int		ft_putchar(char c);
/**
 * @brief Prints the string STR
 * 
 * @param str 
 * @return int Number of characters printed
 */
int		ft_putstr(char *str);
/**
 * @brief Prints the addres of memory pointed by
 * PTR in hexadecimal base
 * 
 * @param ptr 
 * @return int Number of chars printed
 */
int		ft_putptr(long unsigned int ptr);
/**
 * @brief Prints the address in hexadecimal
 * 
 * @param ptr 
 * @param num 
 * @return int Number of chars printed
 */
int		ft_puthexa(unsigned long long num, int capital);
/**
 * @brief Prints the number NB
 * 
 * @param nb 
 * @return int Number of digits printed
 */
int		ft_putnbr(int nb);
/**
 * @brief Changes N integer to an string, minding of negatives
 * 
 * @param n 
 * @return char* 
 */
char	*ft_itoa(int n);
/**
 * @brief Prints the unsigned number NB
 * 
 * @param nb 
 * @return unsigned int Number of digits printed
 */
int		ft_putnbr2(unsigned int nb);
/**
 * @brief Changes N unsigned integer to an string, minding of negatives
 * 
 * @param n 
 * @return char* 
 */
char	*ft_itoa2(unsigned int n);

#endif