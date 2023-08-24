/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_printf.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sadoming <sadoming@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/22 16:19:30 by sadoming          #+#    #+#             */
/*   Updated: 2023/08/24 19:36:55 by sadoming         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef TEST_PRINTF_H
# define TEST_PRINTF_H

# include <stdio.h>
# include "ft_printf.h"

// Apliccations -->
void	cc(char color);
int		look4ko(int ori, int you);
void	resume(int len, ...);

// Tests -->
void	test_nc(void);
void	test_nbr(void);
void	test_hexc(void);

#endif
