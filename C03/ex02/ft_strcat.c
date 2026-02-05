/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjulya-c <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/19 13:34:20 by tjulya-c          #+#    #+#             */
/*   Updated: 2026/01/19 13:39:49 by tjulya-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcat(char *dest, char *src)
{
	int	countd;
	int	counts;

	countd = 0;
	counts = 0;
	while (dest[countd] != '\0')
	{
		countd++;
	}
	while (src[counts] != '\0')
	{
		dest[countd] = src[counts];
		countd++;
		counts++;
	}
	dest[countd] = '\0';
	return (dest);
}
