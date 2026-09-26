/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmorales <jmorales@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/23 20:25:39 by juan              #+#    #+#             */
/*   Updated: 2026/09/26 12:45:31 by jmorales         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

void	ft_swap(int *a, int *b)
{
	int	temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
/*
int main(void)
{
	int a = 5;
	int b = 4;
	printf("%d", a);
	printf("%d", b);
	ft_swap(&a, &b);
	printf("%d", a);
	printf("%d", b);
}
*/
