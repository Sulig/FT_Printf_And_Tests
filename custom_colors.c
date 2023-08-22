/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   custom_colors.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sadoming <sadoming@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/22 17:00:41 by sadoming          #+#    #+#             */
/*   Updated: 2023/08/22 17:56:20 by sadoming         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test_printf.h"

void	cc(char color)
{
	switch (color)
	{
		case 'R':
			printf("\033[1;91m");
			break;

		case 'G':
			printf("\033[1;92m");
			break;

		case 'B':
			printf("\033[1;34m");
			break;

		case 'Y':
			printf("\033[1;93m");
			break;

		case 'W':
			printf("\033[1;37m");
			break;

		case 'C':
			printf("\033[1;36m");
			break;
	}
}

void	look4ko(int you, int ori)
{
	if (you == ori)
	{
		cc('G');
		printf(" \t~ |OK| ~");
	}
	else
	{
		cc('R');
		printf(" \t~ |KO!| ~\n Diferent Length! -> Org |%i|\tYou |%i|", ori, you);
	}
	cc('W');
	printf("\n");
}
