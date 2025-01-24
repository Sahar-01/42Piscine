/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scheragh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/28 12:21:10 by scheragh          #+#    #+#             */
/*   Updated: 2024/08/28 12:32:23 by scheragh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	i;
	int	*marray;

	if (min >= max)
	{
		*range = NULL;
		return (0);
	}
	i = max - min;
	marray = (int *)malloc(sizeof(int) * (i));
	if (marray == NULL)
	{
		*range = NULL;
		return (-1);
	}
	i = 0;
	*range = marray;
	while (max > min)
	{
		marray[i] = min++;
		i++;
	}
	return (i);
}
