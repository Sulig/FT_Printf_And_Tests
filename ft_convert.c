/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sadoming <sadoming@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/21 18:43:34 by sadoming          #+#    #+#             */
/*   Updated: 2023/08/22 20:20:57 by sadoming         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_hexmin_cnv(unsigned int nbr)
{
	int		ret;
	char	*hex;

	ret = 0;
	hex = "0123456789abcdef";
	if (nbr >= 16)
		ret = write(1, &hex[nbr / 16], 1);
	ret += write(1, &hex[nbr % 16], 1);
	return (ret);
}

int	ft_hexmax_cnv(unsigned int nbr)
{
	int		ret;
	char	*hex;

	ret = 0;
	hex = "0123456789ABCDEF";
	if (nbr >= 16)
		ret = write(1, &hex[nbr / 16], 1);
	ret += write(1, &hex[nbr % 16], 1);
	return (ret);
}

int	ft_printnbr(int nbr)
{
	char	*str;
	int		ret;

	str = ft_itoa(nbr);
	ret = ft_putstr(str);
	free(str);
	return (ret);
}
