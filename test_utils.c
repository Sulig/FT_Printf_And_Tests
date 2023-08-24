/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_utils.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sadoming <sadoming@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/24 19:51:08 by sadoming          #+#    #+#             */
/*   Updated: 2023/08/24 20:16:21 by sadoming         ###   ########.fr       */
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

int	look4ko(int you, int ori)
{
	int		ok;

	if (you == ori)
	{
		cc('G');
		printf(" \t\t\t\t\t\t\t\t~ |OK| ~");
		ok = 1;
	}
	else
	{
		cc('R');
		printf(" \t\t\t\t\t\t\t\t~ |KO!| ~\
			   	Diferent Length! -> Org |%i|\tYou |%i|", ori, you);
		ok = 0;
	}
	cc('W');
	printf("\n");
	return (ok);
}

void	resume(int len, ...)
{
	va_list	args;
	int		cnt;
	int		now;

	cnt = 0;
	va_start(args, len);
	cc('C');
	printf("|---------- - >\n");
	printf("| Tests Resume: ");
	while (cnt < len)
	{
		now = va_arg(args, int);
		if (now == 1)
		{
			cc('G');
			printf("|OK| ");
		}
		else if (now == 0)
		{
			cc('R');
			printf("|KO| ");
		}
		else
		{
			cc('Y');
			printf("|Something went wrong| ");
		}
		cnt++;
	}
	va_end(args);
	cc('C');
	printf("\n{~~~~~~~~~~~~~~~}\n");
}
