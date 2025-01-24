/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scheragh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/27 19:57:10 by scheragh          #+#    #+#             */
/*   Updated: 2024/08/27 20:00:36 by scheragh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	i;
	int	*marray;

	if (min >= max)
		return (0);
	i = max - min;
	marray = (int *)malloc(sizeof(int) * (i));
	if (marray == NULL || i < 0)
		return (NULL);
	i = 0;
	while (max > min)
	{
		marray[i] = min;
		min++;
		i++;
	}
	return (marray);
}
