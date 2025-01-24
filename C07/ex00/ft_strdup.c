/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scheragh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/27 19:15:00 by scheragh          #+#    #+#             */
/*   Updated: 2024/08/27 19:31:15 by scheragh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include <stdlib.h>

int	ft_strlen(char *src)
{
	int	i;

	i = 0;
	while (*src)
	{
		i++;
		src++;
	}
	return (i);
}

char	*ft_strdup(char *src)
{
	int		src_len;
	char	*result;
	char	*res;

	src_len = ft_strlen(src);
	result = (char *)malloc(sizeof(*result) * (src_len + 1));
	if (result == NULL)
		return (NULL);
	res = result;
	while (*src)
	{
		*res = *src;
		res++;
		src++;
	}
	*res = '\0';
	return (result);
}
