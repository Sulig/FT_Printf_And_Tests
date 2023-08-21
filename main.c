/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sadoming <sadoming@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/10 19:23:32 by sadoming          #+#    #+#             */
/*   Updated: 2023/08/21 20:25:13 by sadoming         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdio.h>

int	main(void)
{
	int		min = -1;
	int		ret;
	//char	*str = "STRstr0123";

	/**/
	ret = ft_printf("Testing ft_printf!!%%\t|");
	printf("L: %i|\n", ret);
	ret = printf("Testing ft_printf!!%%\t|");
	printf("L: %i|\n\n", ret);
	/**/
	/*
	ret = ft_printf("Mine: %%%c", 'x');
	printf("\t|Length: %i|\n", ret);
	ret = printf("Orin: %%%c", 'x');
	printf("\t|Length: %i|\n\n", ret);
	ret = ft_printf("Str mine: %s\t|", str);
	printf("L: %i|\n", ret);
	ret = printf("Str orin: %s\t|", str);
	printf("L: %i|\n\nTesting case \"NULL\"\n Orin->\t", ret);
	ret = printf("%s", (char *)NULL);
	printf("\t|length: %i|\n Mine->\t", ret);
	ret = ft_printf("%s", (char *)NULL);
	printf("\t|length: %i|\n", ret);
	*/
	ret = printf("Or int: %i\t|Len:", min);
	printf("%i|\n", ret);
	ret = ft_printf("Mi int: %i\t|Len:", min);
	printf("%i|\n\n", ret);

	min = rand();
	ret = printf("Random Or: %i\t|Len ", min);
	printf("%i|\n", ret);
	ret = ft_printf("Random Mi: %i\t|Len ", min);
	ret = ft_printf("%i|\n", ret);
	/**/
	ret = ft_printf("\n");
}
