/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printstr.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sadoming <sadoming@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/21 18:48:10 by sadoming          #+#    #+#             */
/*   Updated: 2023/08/21 19:04:36 by sadoming         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printstr(char *str)
{
	int		ret;
	int		cnt;

	ret = 0;
	cnt = -1;
	while (str[++cnt])
	{
		if (write(1, &str[cnt], 1) == -1)
			return (-1);
		ret++;
	}
	return (ret);
}
