/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: henguyen <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/27 13:17:23 by henguyen          #+#    #+#             */
/*   Updated: 2021/12/07 17:12:04 by henguyen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	convert(long int *cp, int nb, int *is_neg)
{
	if (nb < 0)
	{
		*cp = (long int)nb * -1;
		*is_neg = 1;
	}
}

void	ft_putnbr(int nb)
{
	char		c[100];
	int			count;
	int			is_neg;
	long int	cp;

	cp = nb;
	count = 99;
	is_neg = 0;
	convert(&cp, nb, &is_neg);
	while (cp >= 10)
	{
		c[count] = '0' + cp % 10;
		count--;
		cp = (long int)(cp / 10);
	}
	c[count] = '0' + cp;
	count--;
	if (is_neg == 1)
	{
		c[count] = '-';
		count--;
	}
	write(1, &(c[count + 1]), 99 - count);
}
