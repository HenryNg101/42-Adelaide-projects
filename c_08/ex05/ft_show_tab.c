/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_show_tab.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: henguyen <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/15 16:31:31 by henguyen          #+#    #+#             */
/*   Updated: 2021/12/15 18:29:50 by henguyen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "ft_stock_str.h"

void	ft_putstr(char *str)
{
	int	id;

	id = 0;
	while (str[id])
	{
		write(1, &str[id], 1);
		id++;
	}
	write(1, "\n", 1);
}

void	ft_putnbr(int nb)
{
	char		c[100];
	int			count;

	count = 99;
	while (nb >= 10)
	{
		c[count] = '0' + nb % 10;
		count--;
		nb = nb / 10;
	}
	c[count] = '0' + nb;
	count--;
	write(1, &(c[count + 1]), 99 - count);
	write(1, "\n", 1);
}

void	ft_show_tab(struct s_stock_str *par)
{
	while ((par->copy != NULL || par->size != 0) || (par->str != NULL))
	{
		ft_putstr(par->str);
		ft_putnbr(par->size);
		ft_putstr(par->copy);
		par++;
	}
}
