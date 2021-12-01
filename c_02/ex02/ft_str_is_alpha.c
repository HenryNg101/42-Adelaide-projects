/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: henguyen <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/30 16:34:42 by henguyen          #+#    #+#             */
/*   Updated: 2021/11/30 17:13:38 by henguyen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_alpha(char *str)
{
	int	check;
	int	id;

	check = 1;
	id = 0;
	while (str[id] != '\0')
	{
		if (str[id] < 'A')
		{
			check = 0;
		}
		if (str[id] < 'a' && str[id] > 'Z')
		{
			check = 0;
		}
		if (str[id] > 'z')
		{
			check = 0;
		}
		id++;
	}
	return (check);
}
