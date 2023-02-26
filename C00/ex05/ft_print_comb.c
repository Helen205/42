/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: huzuncay <>                                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/14 11:58:49 by huzuncay          #+#    #+#             */
/*   Updated: 2022/02/15 13:27:53 by huzuncay         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_comb(void)
{
	int	bir;
	int	on;
	int	yuz;

	yuz = '0' - 1;
	while (++yuz && yuz <= '7')
	{
			on = yuz;
		while (++on && on <= '8')
		{
				bir = on;
			while (++bir && bir <= '9')
			{
				write (1, &yuz, 1);
				write (1, &on, 1);
				write (1, &bir, 1);
				if (yuz != '7' || on != '8' || bir != '9')
					write (1, ", ", 2);
			}
		}
	}
}
