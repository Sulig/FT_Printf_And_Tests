/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sadoming <sadoming@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/03 19:31:03 by sadoming          #+#    #+#             */
/*   Updated: 2023/07/11 20:12:53 by sadoming         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_bzero(void *s, size_t n)
{
	size_t	cnt;
	char	*dest;

	dest = (char *) s;
	cnt = 0;
	while (cnt < n)
	{
		dest[cnt] = '\0';
		cnt++;
	}
}
