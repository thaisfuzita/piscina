/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjulya-c <tjulya-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/02 19:12:52 by tjulya-c          #+#    #+#             */
/*   Updated: 2026/02/04 17:58:26 by tjulya-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	count;

	count = 0;
	while (str[count] != '\0')
		count++;
	return (count);
}

int	join_word(char *dest, char *word, int c)
{
	int	i;

	i = 0;
	while (word[i] != '\0')
	{
		dest[c + i] = word[i];
		i++;
	}
	return (i);
}

int	total_size(char **strs, char *sep, int size)
{
	int	i;
	int	total;

	i = 0;
	total = 0;
	while (i < size)
	{
		total += ft_strlen(strs[i]);
		i++;
	}
	total += (size - 1) * ft_strlen(sep) + 1;
	return (total);
}

char	*joined(char **strs, char *sep, char *str, int size)
{
	int	i;
	int	k;

	i = 0;
	k = 0;
	while (i < size)
	{
		k += join_word(str, strs[i], k);
		if (i != size - 1)
			k += join_word(str, sep, k);
		i++;
	}
	str[k] = '\0';
	return (str);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		total;
	char	*str;

	if (size == 0)
	{
		str = malloc(sizeof(char));
		if (!str)
			return (0);
		str[0] = '\0';
		return (str);
	}
	total = total_size(strs, sep, size);
	str = malloc(total * sizeof(char));
	if (!str)
		return (0);
	str = joined(strs, sep, str, size);
	return (str);
}
