/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scheragh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/20 18:27:49 by scheragh          #+#    #+#             */
/*   Updated: 2024/08/20 18:28:16 by scheragh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	valid_base(char *base)
{
	int	i;
	int	j;

	i = 0;
	while (base[i] != '\0')
	{
		if (base[i] == '+' || base[i] == '-')
			return (0);
		j = i + 1;
		while (base[j] != '\0')
		{
			if (base[i] == base[j])
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}

int	ft_strlen(char *base)
{
	int	base_length;

	base_length = 0;
	while (base[base_length] != '\0')
	{
		base_length++;
	}
	if (base_length > 1)
		return (base_length);
	else
		return (0);
}

void	ft_putnbr_base(int nbr, char *base)
{
	int	base_len;

	base_len = ft_strlen(base);
	if (base_len != 0 && valid_base(base))
	{
		if (nbr == -2147483648)
		{
			write(1, "-", 1);
			ft_putnbr_base(-(nbr / base_len), base);
			ft_putnbr_base(-(nbr % base_len), base);
			return ;
		}
		if (nbr < 0)
		{
			write(1, "-", 1);
			nbr = -nbr;
		}
		if (nbr >= base_len)
			ft_putnbr_base(nbr / base_len, base);
		write(1, &base[nbr % base_len], 1);
	}
}
