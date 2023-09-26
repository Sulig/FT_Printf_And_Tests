/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sadoming <sadoming@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/11 20:12:03 by sadoming          #+#    #+#             */
/*   Updated: 2023/08/28 18:38:07 by sadoming         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# include <stdarg.h>
# include <stdlib.h>
# include <unistd.h>

void	*ft_calloc(size_t count, size_t size);
char	*ft_itoa(int n);
char	*ft_itoa_unsig(size_t n, char *base);
int		ft_printf(char const *str, ...);
int		ft_putchar(char ch);
int		ft_putnbr(int nbr);
int		ft_putstr(char *str);
int		ft_putunsig(size_t nbr, char cast);

#endif
