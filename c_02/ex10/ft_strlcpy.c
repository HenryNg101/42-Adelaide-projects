/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: henguyen <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/30 16:57:59 by henguyen          #+#    #+#             */
/*   Updated: 2021/11/30 17:16:58 by henguyen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	id;

	id = 0;
	while ((src[id] != '\0') && (id < size))
	{
		if (id + 1 < size)
		{
			*(dest + id) = src[id];
			id++;
		}
		else
		{
			break ;
		}
	}
	*(dest + id) = '\0';
	while (src[id] != '\0')
	{
		id++;
	}
	return (id);
}
