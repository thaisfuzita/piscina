/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjulya-c <tjulya-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/15 16:52:20 by tjulya-c          #+#    #+#             */
/*   Updated: 2026/01/19 10:55:51 by tjulya-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char *str)
{	
	int	count;

	count = 0;
	while (str[count] != '\0')
	{
		count++;
	}
	write(1, str, count);
}

/*int	main(void)
{
	ft_putstr("Hello World!");
	return (0);
}*/
