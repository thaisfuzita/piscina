/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjulya-c <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/25 19:27:39 by tjulya-c          #+#    #+#             */
/*   Updated: 2026/01/25 19:37:37 by tjulya-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_recursive_power(int nb, int power)
{
	int	num;

	num = 1;
	if (power < 0)
	{
		return (0);
	}
	if (power == 0)
	{
		return (1);
	}
	if (power > 1)
	{
		num = ft_recursive_power(nb, (power - 1));
	}
	num = num * nb;
	return (num);
}

/*int	main()
{
	int x = ft_recursive_power(5, 6);
	printf("%d", x);
	return 0;
}*/
