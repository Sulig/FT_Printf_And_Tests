/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sadoming <sadoming@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/10 17:01:07 by sadoming          #+#    #+#             */
/*   Updated: 2023/08/21 20:05:07 by sadoming         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putchar(char ch)
{
	return (write(1, &ch, 1));
}

int	ft_switch(char cast, va_list args)
{
	int		ret;

	ret = 0;
	if (cast == 'c')
		ret += ft_putchar(va_arg(args, int));
	else if (cast == 's')
		ret += ft_putstr(va_arg(args, char *));
	else if (cast == 'p')
		ret += va_arg(args, unsigned long);
	else if (cast == 'd')
		ret += ft_printnbr(va_arg(args, int));
	else if (cast == 'i')
		ret += ft_printnbr(va_arg(args, int));
	else if (cast == 'u')
		ret += va_arg(args, unsigned int);
	else if (cast == 'x')
		ret += ft_hexmin_cnv(va_arg(args, unsigned int));
	else if (cast == 'X')
		ret += ft_hexmax_cnv(va_arg(args, unsigned int));
	else
		ret += ft_putchar(cast);
	return (ret);
}

int	ft_printf(char const *cast, ...)
{
	va_list	args;
	int		cnt;
	int		ret;

	va_start(args, cast);
	cnt = -1;
	ret = 0;
	while (cast[++cnt])
	{
		if (cast[cnt] == '%')
			ret += ft_switch(cast[++cnt], args);
		else if (write(1, &cast[cnt], 1) != -1)
			ret++;
		else
			return (-1);
	}
	va_end(args);
	return (ret);
}
