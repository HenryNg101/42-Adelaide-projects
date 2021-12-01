/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: henguyen <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/30 16:47:43 by henguyen          #+#    #+#             */
/*   Updated: 2021/11/30 17:15:09 by henguyen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_lowercase(char *str)
{
	int	check;
	int	id;

	check = 1;
	id = 0;
	while (str[id] != '\0')
	{
		if (str[id] < 'a' || str[id] > 'z')
		{
			check = 0;
		}
		id++;
	}
	return (check);
}
