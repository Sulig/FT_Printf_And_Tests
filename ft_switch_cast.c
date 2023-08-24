/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_switch_cast.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sadoming <sadoming@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/24 18:47:28 by sadoming          #+#    #+#             */
/*   Updated: 2023/08/24 19:08:17 by sadoming         ###   ########.fr       */
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

int	ft_putnbr(int nbr)
{
	char	*str;
	char	*base;
	int		ret;

	base = "0123456789";
	str = ft_itoa(nbr, base);
	ret = ft_putstr(str);
	free(str);
	return (ret);
}

int	ft_putunsig(size_t nbr, char cast)
{
	char	*str;
	char	*base;
	int		ret;

	ret = 0;
	if (cast == 'X')
		base = "0123456789ABCDEF";
	if (cast == 'x' || cast == 'u' || cast == 'p')
	{
		base = "0123456789abcdef";
		if (cast == 'p')
			ret += ft_putstr("0x");
	}
	str = ft_itoa_unsig(nbr, base);
	ret = ft_putstr(str);
	free(str);
	return (ret);
}
