/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjulya-c <tjulya-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/02 18:55:00 by tjulya-c          #+#    #+#             */
/*   Updated: 2026/02/04 17:59:25 by tjulya-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	i;
	int	r;
	int	*arr;

	r = max - min;
	if (r <= 0)
	{
		*range = NULL;
		return (0);
	}
	arr = malloc(r * sizeof(int));
	if (!arr)
	{
		*range = NULL;
		return (-1);
	}
	i = 0;
	while (i < r)
	{
		arr[i] = min + i;
		i++;
	}
	*range = arr;
	return (r);
}
