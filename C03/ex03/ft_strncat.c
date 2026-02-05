/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjulya-c <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/19 13:40:44 by tjulya-c          #+#    #+#             */
/*   Updated: 2026/01/19 17:09:53 by tjulya-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	countd;
	unsigned int	counts;

	countd = 0;
	counts = 0;
	while (dest[countd] != '\0')
	{
		countd++;
	}
	while (src[counts] != '\0' && counts < nb)
	{
		dest[countd] = src[counts];
		countd++;
		counts++;
	}
	dest[countd] = '\0';
	return (dest);
}
