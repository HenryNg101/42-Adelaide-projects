/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: henguyen <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/15 16:27:33 by henguyen          #+#    #+#             */
/*   Updated: 2021/12/15 18:30:29 by henguyen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stock_str.h"
#include <stdlib.h>

int	count_char(char *str)
{
	int	id;

	id = 0;
	while (str[id])
	{
		id++;
	}
	return (id);
}

char	*ft_strcpy(char *str, int size)
{
	char	*copy;
	int		id;

	copy = (char *)malloc(sizeof(char) * (size + 1));
	id = 0;
	while (str[id])
	{
		copy[id] = str[id];
		id++;
	}
	copy[id] = '\0';
	return (copy);
}

struct s_stock_str	*ft_strs_to_tab(int ac, char **av)
{
	int			x;
	char		*copy;
	int			size;
	t_stock_str	new;
	t_stock_str	*stock_arr;

	x = 0;
	stock_arr = (t_stock_str *)malloc(sizeof(t_stock_str) * (ac + 1));
	while (x < ac)
	{
		size = count_char(av[x]);
		copy = ft_strcpy(av[x], size);
		new.str = av[x];
		new.copy = copy;
		new.size = size;
		stock_arr[x] = new;
		x++;
	}
	stock_arr[i].str = NULL;
	return (stock_arr);
}
