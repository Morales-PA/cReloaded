/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_foreach.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmorales <jmorales@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/26 16:59:28 by jmorales          #+#    #+#             */
/*   Updated: 2026/09/27 19:33:39 by jmorales         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_foreach(int *tab, int length, void (*f)(int))
{
	int	i;

	i = 0;
	while (i < length)
	{
		(*f)(tab[i]);
		i++;
	}
}
/*
#include <stdio.h>
int main(void)
{
	int tab[] = {1,2,3,4,5};

	void myfunction(int n) 
	{
		printf("%d",n);
	}

	ft_foreach(tab, 5, myfunction);
}
*/
