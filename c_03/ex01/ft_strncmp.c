/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: henguyen <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/01 17:07:28 by henguyen          #+#    #+#             */
/*   Updated: 2021/12/02 16:08:17 by henguyen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	final_check(char *s1, char *s2, unsigned int id, unsigned int limit)
{
	if (id == limit)
	{
		return (0);
	}
	else if (s1[id] == '\0' && s2[id] == '\0')
	{
		return (0);
	}
	else if (s1[id] != '\0')
	{
		return (1);
	}
	else
	{
		return (-1);
	}
}

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	id;
	int				final;

	id = 0;
	while ((s1[id] != '\0' && s2[id] != '\0') && id < n)
	{
		if (s1[id] != s2[id])
		{
			if (s1[id] < s2[id])
			{
				return (-1);
			}
			else if (s1[id] > s2[id])
			{
				return (1);
			}
		}
		id++;
	}
	final = final_check(s1, s2, id, n);
	return (final);
}
