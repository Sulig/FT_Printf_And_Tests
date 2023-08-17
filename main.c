/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sadoming <sadoming@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/10 19:23:32 by sadoming          #+#    #+#             */
/*   Updated: 2023/08/17 20:27:30 by sadoming         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdio.h>
#include <unistd.h>

int	main(void)
{
	//int		min = -1;
	int		ret;
	//char	*str;

	ret = ft_printf("Testing ft_printf!!%%\n");
	printf("Returned: %i\n", ret);
	ret = printf("Testing ft_printf!!%%\n");
	printf("Original: %i\n\n", ret);
	ret = ft_printf("Mine: %%%c", 'x');
	printf("\t|Length: %i|\n", ret);
	ret = printf("Orin: %%%c", 'x');
	printf("\t|Length: %i|\n\n", ret);
}
