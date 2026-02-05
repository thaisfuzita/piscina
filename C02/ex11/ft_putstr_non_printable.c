/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjulya-c <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/27 19:54:09 by tjulya-c          #+#    #+#             */
/*   Updated: 2026/01/27 20:11:07 by tjulya-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr_non_printable(char *str)
{
	int	i;
	int	x;

	i = 0;
	while (str[i] != '\0')
	{
		if ((str[i] >= 0 && str[i] < 32) || str[i] == 127)
		{
			x = 
			write(1, "", 1);
		}
		else
			write(1, &str[i], 1);
		i++;
	}
}

/*int main()
{
	ft_putstr_non_printable("Hello\nHow are you?");
	return 0;
}*/
