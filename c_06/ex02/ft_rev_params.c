/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: henguyen <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/12 16:07:31 by henguyen          #+#    #+#             */
/*   Updated: 2021/12/12 16:10:21 by henguyen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char **argv)
{
	int	id;
	int	id2;

	id = argc - 1;
	while (id > 0)
	{
		id2 = 0;
		while (argv[id][id2] != '\0')
		{
			write(1, &argv[id][id2], 1);
			id2++;
		}
		write(1, "\n", 1);
		id--;
	}
	return (0);
}
