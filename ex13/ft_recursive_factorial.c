/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juan <juan@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/24 18:18:16 by juan              #+#    #+#             */
/*   Updated: 2026/09/24 18:23:14 by juan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_factorial(int nb)
{
	if (nb > 1)
		nb = nb * ft_recursive_factorial(nb - 1);
	else
		return (1);
	return (nb);
}
/*
#include <stdio.h>
int main(void)
{
	printf("%d",ft_recursive_factorial(5));
}
*/
