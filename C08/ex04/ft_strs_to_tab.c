/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scheragh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/28 16:28:06 by scheragh          #+#    #+#             */
/*   Updated: 2024/08/28 16:29:05 by scheragh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stddef.h>
#include "ft_stock_str.h"

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (*str)
	{
		i++;
		str++;
	}
	return (i);
}

char	*ft_strcpy(char *str, int size)
{
	int		i;
	char	*marr;

	marr = malloc(sizeof(char) * (size +1));
	if (marr == NULL)
		return (NULL);
	i = 0;
	while (str[i])
	{
		marr[i] = str[i];
		i++;
	}
	marr[i] = '\0';
	return (marr);
}

struct s_stock_str	*ft_strs_to_tab(int ac, char **av)
{
	t_stock_str	*marr;
	int			i;

	marr = (t_stock_str *)malloc(sizeof(t_stock_str) * (ac + 1));
	if (marr == NULL)
		return (NULL);
	i = 0;
	while (i < ac)
	{
		marr[i].size = ft_strlen(av[i]);
		marr[i].str = av[i];
		marr[i].copy = ft_strcpy(av[i], marr[i].size);
		i++;
	}
	marr[i].size = 0;
	marr[i].str = 0;
	marr[i].copy = 0;
	return (marr);
}
