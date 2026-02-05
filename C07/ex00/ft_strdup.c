/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjulya-c <tjulya-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/02 10:25:19 by tjulya-c          #+#    #+#             */
/*   Updated: 2026/02/02 19:15:20 by tjulya-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strdup(char *src)
{
	int		i;
	int		j;
	char	*arr;

	i = 0;
	while (src[i])
		i++;
	arr = malloc (i + 1 * sizeof(char));
	if (!arr)
		return (0);
	j = 0;
	while (j <= i)
	{
		arr[j] = src[j];
		j++;
	}
	arr[j] = '\0';
	return (arr);
}	
