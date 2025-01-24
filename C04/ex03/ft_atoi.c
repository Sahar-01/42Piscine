/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scheragh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/20 14:57:35 by scheragh          #+#    #+#             */
/*   Updated: 2024/08/20 17:27:37 by scheragh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	skip_whitespaces(char **str)
{
	while (**str == ' ' || **str == '\t' || **str == '\n'
		|| **str == '\v' || **str == '\f' || **str == '\r')
	{
		(*str)++;
	}
}

int	signs(char **str)
{
	int	negatives;

	negatives = 0;
	while (**str == '+' || **str == '-')
	{
		if (**str == '-')
			negatives++;
		(*str)++;
	}
	if (negatives % 2 == 0)
	{
		negatives = 1;
	}
	else
	{
		negatives = -1;
	}
	return (negatives);
}

int	ft_atoi(char *str)
{
	int	result;
	int	sign;

	result = 0;
	skip_whitespaces(&str);
	sign = signs(&str);
	while (*str >= '0' && *str <= '9')
	{
		result = result * 10 + (*str - '0');
		str++;
	}
	return (sign * result);
}
