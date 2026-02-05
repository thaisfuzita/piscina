/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjulya-c <tjulya-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/19 13:03:39 by tjulya-c          #+#    #+#             */
/*   Updated: 2026/01/24 19:30:51 by tjulya-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	count;

	count = 0;
	if (n == 0)
	{
		return (0);
	}
	while (s1[count] != '\0' && s1[count] == s2[count] && count < n - 1)
	{
		count++;
	}
	return (s1[count] - s2[count]);
}
