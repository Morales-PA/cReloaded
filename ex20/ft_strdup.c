/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmorales <jmorales@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/26 13:33:28 by jmorales          #+#    #+#             */
/*   Updated: 2026/09/28 16:57:09 by jmorales         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strdup(char *src)
{
	char	*new_string;
	int		str_length;

	str_length = 0;
	while (src[str_length])
	{
		str_length++;
	}
	new_string = malloc(sizeof(char [str_length + 1]));
	if (new_string == NULL)
	{
		return (NULL);
	}
	str_length = 0;
	while (src[str_length])
	{
		new_string[str_length] = src[str_length];
		str_length++;
	}
	return (new_string);
}
