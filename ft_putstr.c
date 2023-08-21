/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sadoming <sadoming@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/21 19:05:05 by sadoming          #+#    #+#             */
/*   Updated: 2023/08/21 19:59:47 by sadoming         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putstr(char *str)
{
	int		ret;
	int		cnt;

	ret = 0;
	cnt = -1;
	if (str == NULL)
		return (write(1, "(null)", 6));
	while (str[++cnt])
	{
		if (write(1, &str[cnt], 1) == -1)
			return (-1);
		ret++;
	}
	return (ret);
}
