/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: henguyen <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/30 16:49:22 by henguyen          #+#    #+#             */
/*   Updated: 2021/12/01 15:39:51 by henguyen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_uppercase(char *str)
{
	int	check;
	int	id;

	check = 1;
	id = 0;
	while (str[id] != '\0')
	{
		if (str[id] < 'A' || str[id] > 'Z')
		{
			check = 0;
		}
		id++;
	}
	return (check);
}
