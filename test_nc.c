/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_nc.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sadoming <sadoming@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/22 16:18:56 by sadoming          #+#    #+#             */
/*   Updated: 2023/08/24 20:14:13 by sadoming         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test_printf.h"

void	test_nc(void)
{
	int		ori, you, t1, t2;

	cc('Y');
	printf("~ Testing with no \"%%\" cases:\n");
	/**/
	cc('W');
	printf("\n");
	you = ft_printf("You: abcdefghijklmnopqrstuvwxyz");
	printf("\n");
	ori = printf("Ori: abcdefghijklmnopqrstuvwxyz");
	printf("\n");
	t1 = look4ko(you, ori);
	/**/
	you = ft_printf("You: \"\t\"\"\12\"\"\13\"\n");
	ori = printf("Ori: \"\t\"\"\12\"\"\13\"\n");
	t2 = look4ko(you, ori);
	/**/
	resume(2, t1, t2);
	cc('Y');
	printf("~ ------------------------- ~\n");
}
