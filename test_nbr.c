/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_nbr.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sadoming <sadoming@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/22 17:42:44 by sadoming          #+#    #+#             */
/*   Updated: 2023/08/22 18:32:53 by sadoming         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test_printf.h"

void	test_nbr(void)
{
	int	zero, neg, pos, min, max, random;
	int	you, ori;

	zero = 0;
	neg = -1;
	pos = 2;
	min = -2147483648;
	max = 2147483647;
	random = rand();
	cc('Y');
	printf("~ Testing \"%%i\" cases:\n");
	cc('W');
	/**/
	printf(" \t~ Test 1 ~\n");
	you = ft_printf("You: %i\n", pos);
	ori = printf("Ori: %i\n", pos);
	look4ko(you, ori);
	/**/
	printf(" \t~ Test 2 ~\n");
	you = ft_printf("You: %i\n", zero);
	ori = printf("Ori: %i\n", zero);
	look4ko(you, ori);
	/**/
	printf(" \t~ Test 3 ~\n");
	you = ft_printf("You: %i\n", neg);
	ori = printf("Ori: %i\n", neg);
	look4ko(you, ori);
	/**/
	printf(" \t~ Test 4 ~\n");
	you = ft_printf("You: %i\n", random);
	ori = printf("Ori: %i\n", random);
	look4ko(you, ori);
	/**/
	printf(" \t~ Test 5 ~\n");
	you = ft_printf("You: %i\n", max);
	ori = printf("Ori: %i\n", max);
	look4ko(you, ori);
	/**/
	printf(" \t~ Test 6 ~\n");
	you = ft_printf("You: %i\n", min);
	ori = printf("Ori: %i\n", min);
	look4ko(you, ori);
	/**/
	random = rand();
	random = rand();
	printf(" \t~ Test 7 ~\n");
	you = ft_printf("You: |%i| |%i| |%i| |%i| |%i| |%i|\n", zero, pos, neg, random, min, max);
	ori = printf("Ori: |%i| |%i| |%i| |%i| |%i| |%i|\n", zero, pos, neg, random, min, max);
	look4ko(you, ori);
	/**/
	cc('Y');
	printf("~ ------------------------ ~");
}
