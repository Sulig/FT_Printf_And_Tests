/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_nc.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sadoming <sadoming@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/22 16:18:56 by sadoming          #+#    #+#             */
/*   Updated: 2023/08/22 17:56:38 by sadoming         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test_printf.h"

void	test_nc(void)
{
	int		ori, you;

	cc('Y');
	/**/
	printf("~ Testing with no \"%%\" cases:\n");
	cc('W');
	printf(" \t~ Test 1 ~\n");
	printf("\t");
	you = ft_printf("You: abcdefghijklmnopqrstuvwxyz");
	printf("\n");
	ori = printf("Ori: abcdefghijklmnopqrstuvwxyz");
	printf("\n");
	look4ko(you, ori);
	/**/
	printf(" \t~ Test 2 ~\n");
	you = ft_printf("You: \"\t\"\"\12\"\"\13\"\n");
	ori = printf("Ori: \"\t\"\"\12\"\"\13\"\n");
	look4ko(you, ori);
	/**/
	cc('Y');
	printf("~ ------------------------- ~\n");
	cc('W');
}
