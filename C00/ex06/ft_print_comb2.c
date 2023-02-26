/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: huzuncay <>                                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/14 15:50:53 by huzuncay          #+#    #+#             */
/*   Updated: 2022/02/14 17:31:29 by huzuncay         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_comb2(void)
{
	int	i;
	int	j;

	while (i <= 98)
	{
		j = i + 1;
		while (j <= 99)
		{
			ft_putchar((i / 10) + '0');
			ft_putchar((i % 10) + '0');
			write (1, " ", 1);
			ft_putchar((j / 10) + '0');
			ft_putchar((j % 10) + '0');
			if (i != 98 || j != 99)
				write (1, ", ", 2);
			j++;
		}
		i++;
	}
	write (1, "\n", 1);
}
