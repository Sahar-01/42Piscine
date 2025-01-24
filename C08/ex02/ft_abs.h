/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_abs.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scheragh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/26 11:17:54 by scheragh          #+#    #+#             */
/*   Updated: 2024/08/27 18:09:49 by scheragh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_ABS_H
# define FT_ABS_H

int	absfunction(int Value);

int	absfunction(int Value)
{
	if (Value < 0)
		return (-Value);
	else if (Value > 0)
		return (Value);
	return (0);
}
# define ABS(Value) absfunction(Value)
#endif
