/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: henguyen <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/07 14:56:03 by henguyen          #+#    #+#             */
/*   Updated: 2021/12/07 17:24:22 by henguyen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	is_space(char a)
{
	if ((a == ' ' || a == '\t') || (a == '\n' || a == '\v'))
	{
		return (1);
	}
	else if (a == '\f' || a == '\r')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

void	neg_convert(int *a, int neg_count)
{
	if (neg_count % 2 != 0)
	{
		*a *= -1;
	}
}

void	count_neg(char *str, int *i, int *neg_count)
{
	while ((str[*i] == '+' || str[*i] == '-') && (str[*i] != '\0'))
	{
		if (str[*i] == '-')
		{
			*neg_count += 1;
		}
		(*i)++;
	}
}

int	ft_atoi(char *str)
{
	int	i;
	int	result;
	int	neg_count;

	i = 0;
	result = 0;
	neg_count = 0;
	while (is_space(str[i]) && (str[i] != '\0'))
	{
		i++;
	}
	count_neg(str, &i, &neg_count);
	while ((str[i] >= '0' && str[i] <= '9') && (str[i] != '\0'))
	{
		result *= 10;
		result += (str[i] - '0');
		i++;
	}
	neg_convert(&result, neg_count);
	return (result);
}
