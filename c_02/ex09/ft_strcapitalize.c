/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: henguyen <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/30 16:55:52 by henguyen          #+#    #+#             */
/*   Updated: 2021/12/01 17:29:54 by henguyen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	is_capital(char a)
{
	if (a >= 'a' && a <= 'z')
	{
		return (0);
	}
	else if (a >= 'A' && a <= 'Z')
	{
		return (1);
	}
	else
	{
		return (-1);
	}
}

int	is_alphanumeric(char a)
{
	int	check;

	check = 0;
	if (a >= 'a' && a <= 'z')
	{
		check = 1;
	}
	if (a >= 'A' && a <= 'Z')
	{
		check = 1;
	}
	if (a >= '0' && a <= '9')
	{
		check = 1;
	}
	return (check);
}

char	*ft_strcapitalize(char *str)
{
	int		id;
	char	prev;

	id = 0;
	prev = ' ';
	while (str[id] != '\0')
	{
		if (is_capital(str[id]) == 0)
		{
			if (is_alphanumeric(prev) == 0 || id == 0)
			{
				str[id] -= ' ';
			}
		}
		if (is_capital(str[id]) == 1)
		{
			if (is_alphanumeric(prev) == 1)
			{
				str[id] += ' ';
			}
		}
		prev = str[id];
		id++;
	}
	return (str);
}
