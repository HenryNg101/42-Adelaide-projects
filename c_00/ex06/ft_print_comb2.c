/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: henguyen <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/25 17:49:12 by henguyen          #+#    #+#             */
/*   Updated: 2021/11/27 14:17:08 by henguyen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	write_number(int num)
{
	int		copy;
	char	c;

	copy = num;
	if (num < 10)
	{
		write(1, "0", 1);
	}
	while (copy >= 10)
	{
		c = '0' + (int)(copy / 10);
		write(1, &c, 1);
		copy -= ((int)(copy / 10)) * 10;
	}
	c = '0' + copy;
	write(1, &c, 1);
}

void	ft_print_comb2(void)
{
	int		i;
	int		j;

	i = 0;
	while (i < 100)
	{
		j = i + 1;
		while (j < 100)
		{
			write_number(i);
			write(1, " ", 1);
			write_number(j);
			if (i + 2 < 100)
			{
				write(1, ", ", 2);
			}
			j++;
		}
		i++;
	}
}
