/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sadoming <sadoming@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/10 19:23:32 by sadoming          #+#    #+#             */
/*   Updated: 2023/08/24 20:20:49 by sadoming         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test_printf.h"

int	main(void)
{
	//char	*str = "STRstr0123";

	printf("\033[1;34m\t     ~ Made by Sadoming ~\n");
	printf("\n\033[1;36m**///////////////////////////////////////////**\n");
	printf("**/             Testing Printf              /**\n");
	printf("**///////////////////////////////////////////**\n\n");
	test_nc();
	/*
	ret = ft_printf("Mine: %%%c", 'x');
	printf("\t|Length: %i|\n", ret);
	ret = printf("Orin: %%%c", 'x');
	printf("\t|Length: %i|\n\n", ret);
	ret = ft_printf("Str mine: %s\t|", str);
	ret = printf("Str orin: %s\t|", str);
	printf("L: %i|\n\nTesting case \"NULL\"\n Orin->\t", ret);
	ret = printf("%s", (char *)NULL);
	printf("\t|length: %i|\n Mine->\t", ret);
	ret = ft_printf("%s", (char *)NULL);
	printf("\t|length: %i|\n", ret);
	*/
	test_nbr();
	test_hexc();
	/**/
	printf("\033[1;95m \n");
}
