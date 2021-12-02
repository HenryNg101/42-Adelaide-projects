/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: henguyen <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/27 13:17:23 by henguyen          #+#    #+#             */
/*   Updated: 2021/12/02 18:00:34 by henguyen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putnbr(int nb)
{
	char	c[100];
	int		count;
	int		is_neg;

	count = 99;
	is_neg = 0;
	if (nb < 0)
	{
		is_neg = 1;
		nb *= -1;
	}
	while (nb > 10)
	{
		c[count] = '0' + nb % 10;
		count--;
		nb = (int)(nb / 10);
	}
	if (is_neg == 1)
	{
		c[count] = '-';
		count--;
	}
	write(1, &(c[count]), 100 - count);
	
	while (count < 100)
	{
		c[count] = 0;
		count++;
	}
}

int	main(void)
{
	ft_putnbr(-100);
	write(1, "\n", 1);
	ft_putnbr(100);
	write(1, "\n", 1);
	ft_putnbr(0);
	write(1, "\n", 1);;
	ft_putnbr(-1);
	return (0);
}
