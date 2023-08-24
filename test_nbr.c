/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_nbr.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sadoming <sadoming@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/22 17:42:44 by sadoming          #+#    #+#             */
/*   Updated: 2023/08/24 20:13:15 by sadoming         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test_printf.h"

void	test_nbr(void)
{
	int	zero, neg, pos, min, max, random;

	zero = 0;
	neg = -1;
	pos = 2;
	min = -2147483648;
	max = 2147483647;
	random = rand();
	cc('Y');
	printf("~ Testing \"%%i\" cases:");
	cc('W');
	printf("\n");
	/**/
	resume(8, look4ko(ft_printf("You: %i\n", pos), printf("Ori: %i\n", pos)), look4ko(ft_printf("You: %i\n", zero), printf("Ori: %i\n", zero)), look4ko(ft_printf("You: %i\n", neg), printf("Ori: %i\n", neg)), look4ko(ft_printf("You: %i\n", random), printf("Ori: %i\n", random)), look4ko(ft_printf("You: %i\n", max), printf("Ori: %i\n", max)), look4ko(ft_printf("You: %i\n", min), printf("Ori: %i\n", min)), look4ko(ft_printf("You: |%i| |%i| |%i|\n", pos, zero, neg), printf("Ori: |%i| |%i| |%i|\n", pos, zero, neg)), look4ko(ft_printf("You: |%i| |%i| |%i| |%i| |%i| |%i|\n", zero, pos, neg, random\
					, min, max), printf("Ori: |%i| |%i| |%i| |%i| |%i| |%i|\n", zero, pos, neg, random, min, max)));
	/**/
	cc('Y');
	printf("~ ------------------------ ~\n");
}
