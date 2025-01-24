/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scheragh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/22 10:24:34 by scheragh          #+#    #+#             */
/*   Updated: 2024/08/22 10:26:04 by scheragh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	is_valid_power(int nb, int power)
{
	if (power < 0)
		return (0);
	if (power == 0 && nb == 0)
		return (1);
	return (1);
}

int	ft_recursive_power(int nb, int power)
{
	if (is_valid_power(nb, power) == 0)
		return (0);
	if (power == 0)
		return (1);
	return (nb * ft_recursive_power(nb, power - 1));
}
