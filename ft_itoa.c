/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sadoming <sadoming@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/19 19:20:16 by sadoming          #+#    #+#             */
/*   Updated: 2023/08/22 20:05:02 by sadoming         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static void	ft_bzero(void *s, size_t n)
{
	size_t	cnt;
	char	*dst;

	dst = (char *) s;
	cnt = 0;
	while (cnt < n)
	{
		dst[cnt] = '\0';
		cnt++;
	}
}

static char	*ft_printstr(char *s, int cnt, char n)
{
	if (n != '-')
		s[cnt] = n;
	if (n == '-' && s[cnt] == '\0')
		s[cnt] = '-';
	return (s);
}

static void	ft_putnbr(long nb, char *s, int cnt)
{
	long	n;

	n = nb;
	if (nb > 9)
	{
		ft_putnbr(nb / 10, s, --cnt);
		cnt++;
		n %= 10;
	}
	s = ft_printstr(s, cnt, (n + '0'));
}

static int	ft_numcnt(long n)
{
	int		cnt;

	cnt = 0;
	while (n > 0)
	{
		cnt++;
		n /= 10;
	}
	return (cnt);
}

char	*ft_itoa(int n)
{
	char	*str;
	int		cnt;
	long	num;

	cnt = 0;
	num = (long) n;
	if (num <= 0)
	{
		num *= -1;
		cnt++;
	}
	cnt += ft_numcnt(num);
	str = malloc(cnt + 1 * 1);
	if (str == 0)
		return (0);
	ft_bzero(str, cnt);
	ft_putnbr(num, str, cnt -1);
	return (ft_printstr(str, 0, '-'));
}
