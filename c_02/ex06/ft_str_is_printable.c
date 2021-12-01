/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: henguyen <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/30 16:50:49 by henguyen          #+#    #+#             */
/*   Updated: 2021/12/01 15:40:17 by henguyen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_printable(char *str)
{
	int	check;
	int	id;

	check = 1;
	id = 0;
	while (str[id] != '\0')
	{
		if (str[id] < ' ' || str[id] > '~')
		{
			check = 0;
		}
		id++;
	}
	return (check);
}
