/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: henguyen <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/01 18:11:51 by henguyen          #+#    #+#             */
/*   Updated: 2021/12/01 19:12:10 by henguyen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcat(char *dest, char *src)
{
	unsigned int	id_dest;
	unsigned int	id_src;

	id_dest = 0;
	id_src = 0;
	while (dest[id_dest] != '\0')
	{
		id_dest++;
	}
	while (src[id_src] != '\0')
	{
		dest[id_dest] = src[id_src];
		id_dest++;
		id_src++;
	}
	dest[id_dest] = '\0';
	return (dest);
}
