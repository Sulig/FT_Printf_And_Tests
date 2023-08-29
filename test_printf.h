/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_printf.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sadoming <sadoming@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/22 16:19:30 by sadoming          #+#    #+#             */
/*   Updated: 2023/08/29 18:17:48 by sadoming         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef TEST_PRINTF_H
# define TEST_PRINTF_H

# include <stdio.h>
# include "ft_printf.h"

// Apliccations -->
void	cc(char color);
int		look4ko(int ori, int you);
void	sep(char c);
void	resume(int len, ...);

// Tests -->
void	test_nc(void);
void	test_char(void);
void	test_str(void);
void	test_int(void);
void	test_hex(void);
void	test_pnt(void);
void	test_unsig(void);
void	test_per(void);

#endif
