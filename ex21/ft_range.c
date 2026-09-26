/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmorales <jmorales@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/24 17:31:53 by juan              #+#    #+#             */
/*   Updated: 2026/09/26 19:16:34 by jmorales         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	*array_to_populate;
	int	i;
	int	j;

	if (min >= max)
		return (NULL);
	array_to_populate = malloc(sizeof(int [max - min + 1]));
	j = 0;
	i = min - 1;
	while (i < max)
	{
		array_to_populate[j] = i + 1;
		i++;
		j++;
	}
	return (array_to_populate);
}
/*
#include <stdio.h>
int main(void)
{
    int min = 5;
    int max = 10;
    int *myArray = ft_range(min,max);
    for (int i = 0; i < (max - min + 1); i++)
    {
        printf("%d",myArray[i]);
    }
}
*/
