/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: huzuncay <huzuncay@student.42kocaeli.com.  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/13 08:27:14 by huzuncay          #+#    #+#             */
/*   Updated: 2022/02/15 13:26:10 by huzuncay         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_is_negative(int n)
{
	char	poz;
	char	neg;

	poz = 'P';
	neg = 'N';
	if (n < 0)
		write(1, &neg, 1);
	else
		write(1, &poz, 1);
}
