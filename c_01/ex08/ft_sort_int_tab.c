/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: henguyen <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/30 13:25:34 by henguyen          #+#    #+#             */
/*   Updated: 2021/11/30 13:36:56 by henguyen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_swap(int *a, int *b)
{
	int	c;

	c = *a;
	*a = *b;
	*b = c;
}

void	ft_sort_int_tab(int *tab, int size)
{
	int	id_1;
	int	id_2;

	id_1 = 0;
	while (id_1 < size)
	{
		id_2 = id_1 + 1;
		while (id_2 < size)
		{
			if (tab[id_1] > tab[id_2])
			{
				ft_swap(&tab[id_1], &tab[id_2]);
			}
			id_2++;
		}
		id_1++;
	}
}
