/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scheragh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/20 19:43:56 by scheragh          #+#    #+#             */
/*   Updated: 2024/08/22 10:59:20 by scheragh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int	i;
	int	result;

	i = 1;
	result = 1;
	while (i <= power)
	{
		result = result * nb;
		i++;
	}
	if (power == 0 && nb == 0)
		result = 1;
	if (power < 0)
		result = 0;
	return (result);
}
