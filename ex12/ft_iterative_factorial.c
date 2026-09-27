/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmorales <jmorales@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/24 13:59:57 by juan              #+#    #+#             */
/*   Updated: 2026/09/27 20:31:32 by jmorales         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	acc;

	if (nb < 0 || nb > 12)
		return (0);
	if (nb == 0)
		return (1);
	acc = 1;
	while (nb > 1)
	{
		acc = acc * (nb);
		nb--;
	}
	return (acc);
}
/*
#include <stdio.h>
int	main(void)
{
	printf("%d",ft_iterative_factorial(13));
}
*/
