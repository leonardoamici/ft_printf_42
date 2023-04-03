/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libftprintf.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lamici <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/21 11:08:59 by lamici            #+#    #+#             */
/*   Updated: 2022/10/21 11:12:58 by lamici           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFTPRINTF_H
# define LIBFTPRINTF_H

# include <stddef.h>
# include <stdlib.h>
# include <stdio.h>
# include <string.h>
# include <unistd.h>
# include <stdarg.h>

int	ft_char(int c);
int	ft_digit(int n);
int	ft_hexd(unsigned int n, char format);
int	ft_path(unsigned long int n);
int	ft_printf(const char *str, ...);
int	ft_string(char *str);
int	ft_unsigned(unsigned int n);

#endif
