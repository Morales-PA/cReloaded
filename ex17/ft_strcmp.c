/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmorales <jmorales@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/24 14:25:44 by juan              #+#    #+#             */
/*   Updated: 2026/09/27 20:31:43 by jmorales         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] && s2[i] && s1[i] == s2[i])
	{
		i++;
	}
	return (s1[i] - s2[i]);
}

// #include <stdio.h>
// int main(void)
// {
// 	printf("%d",ft_strcmp("",""));
// 	printf("%s","/");
// 	printf("%d",ft_strcmp("","a"));
// 	printf("%s","/");
// 	printf("%d",ft_strcmp("b","a"));
// }
