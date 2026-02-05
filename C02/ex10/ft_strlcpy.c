/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjulya-c <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/27 19:42:12 by tjulya-c          #+#    #+#             */
/*   Updated: 2026/01/27 19:53:12 by tjulya-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <stdio.h>*/

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	j;

	i = 0;
	j = 0;
	if (size < 0)
		return (0);
	while (src[i] != '\0')
	{
		if (i < size - 1)
		{
			dest[j] = src[i];
			j++;
		}
		i++;
	}
	dest[j] = '\0';
	return (i);
}

/*int main()
{
	char	dest[9];
	int x = ft_strlcpy(dest, "123456789012", 9);
	printf("%d\n", x);
	printf("%s\n", dest);
	return 0;
}*/
