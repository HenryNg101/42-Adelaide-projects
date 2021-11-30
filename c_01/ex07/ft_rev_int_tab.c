/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: henguyen <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/29 13:50:16 by henguyen          #+#    #+#             */
/*   Updated: 2021/11/30 13:24:15 by henguyen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_int_tab(int *tab, int size)
{
	int	id;
	int	swp;

	id = 0;
	swp = 0;
	while (id < (int)(size / 2))
	{
		swp = tab[id];
		tab[id] = tab[size - id - 1];
		tab[size - id - 1] = swp;
		id++;
	}
}
