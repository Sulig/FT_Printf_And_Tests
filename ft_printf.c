/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sadoming <sadoming@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/10 17:01:07 by sadoming          #+#    #+#             */
/*   Updated: 2023/08/17 20:21:05 by sadoming         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putchar(char ch)
{
	return (write(1, &ch, 1));
}

void	ft_switch(char cast, va_list args, int ret)
{
	if (cast == 'c')
		ret += ft_putchar(va_arg(args, int));
	else if (cast == 's')
		va_arg(args, char *);
	else if (cast == 'p')
		ret += va_arg(args, unsigned long);
	else if (cast == 'd')
		ret += va_arg(args, int);
	else if (cast == 'i')
		ret += va_arg(args, int);
	else if (cast == 'u')
		ret += va_arg(args, unsigned int);
	else if (cast == 'x')
		ret += va_arg(args, unsigned int);
	else if (cast == 'X')
		ret += va_arg(args, unsigned int);
	else if (cast == '%')
		ret ++;
	else
		ret += ft_putchar(cast);
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
			ft_switch(cast[++cnt], args, ret);
		if (write(1, &cast[cnt], 1) != -1)
			ret++;
		else
			return (-1);
	}
	va_end(args);
	return (ret);
}
