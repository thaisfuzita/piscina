/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjulya-c <tjulya-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/16 15:25:53 by tjulya-c          #+#    #+#             */
/*   Updated: 2026/01/19 10:51:44 by tjulya-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_alpha(char *str)
{
	int	count;

	count = 0;
	if (str[0] == '\0')
	{
		return (1);
	}
	while (str[count] != '\0')
	{
		if (!((str[count] >= 'a' && str[count] <= 'z')
				|| (str[count] >= 'A' && str[count] <= 'Z')))
		{
			return (0);
		}
		count++;
	}
	return (1);
}
