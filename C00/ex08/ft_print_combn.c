/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scheragh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/09 18:56:36 by scheragh          #+#    #+#             */
/*   Updated: 2024/08/14 13:15:42 by scheragh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	print_comb(int *comb, int n)
{
	int	i;

	i = 0;
	while (i < n)
	{
		ft_putchar(comb[i] + '0');
		i++;
	}
	if (comb[0] < 10 - n)
	{
		ft_putchar(',');
		ft_putchar(' ');
	}
}

void	generate_comb(int *comb, int n, int index, int prev)
{
	int	digit;	

	digit = prev + 1;
	if (index == n)
	{
		print_comb(comb, n);
		return ;
	}
	while (digit < 10)
	{
		comb[index] = digit;
		generate_comb(comb, n, index + 1, digit);
		digit++;
	}
}

void	ft_print_combn(int n)
{
	int	comb[10];

	generate_comb(comb, n, 0, -1);
}
