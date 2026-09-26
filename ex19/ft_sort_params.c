/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juan <juan@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/24 14:55:02 by juan              #+#    #+#             */
/*   Updated: 2026/09/25 09:29:30 by juan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
//#include <stdio.h>

int	ft_strcmp(char *s1, char *s2)
{
	while (*s1 != '\0' && *s2 != '\0')
	{
		return (*s1 - *s2);
	}
	return (*s1 - *s2);
}

void ft_print_argv(int argc, char **argv)
{
	int	i;
	int	j;

	i = 1;
	while (i < argc)
	{
		j = 0;
		while (argv[i][j] != '\0')
		{
			write(1, &argv[i][j], 1);
			j++;
		}
		write(1,"\n",1);
		i++;
	}
}

int	main(int argc, char **argv)
{
	int	i;
	int	j;
	char *temp;

	i = 1;
	while (i < argc)
	{
		j = 1;
		while (j < argc - i)
		{
			if (ft_strcmp(argv[j], argv[j + 1]) > 0)
			{
				temp = argv[j + 1];
				argv[j + 1] = argv[j];
				argv[j] = temp;
			}
			j++;
		}
		i++;
	}
	ft_print_argv(argc, argv);
}
