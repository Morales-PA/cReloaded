/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juan <juan@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/24 13:59:57 by juan              #+#    #+#             */
/*   Updated: 2026/09/24 14:22:55 by juan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_iterative_factorial(int nb)
{
	int	result;

	result = 1;
	while (nb > 1)
	{
		result = result * (nb);
		nb--;
	}
	return (result);
}
/*
int	main(void)
{
	printf("%d",ft_iterative_factorial(5));
}
*/
