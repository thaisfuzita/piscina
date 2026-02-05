/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjulya-c <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/22 18:31:58 by tjulya-c          #+#    #+#             */
/*   Updated: 2026/01/22 18:38:20 by tjulya-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <stdio.h>*/

int	ft_iterative_power(int nb, int power)
{
	int	num;

	num = 1;
	if (power < 0)
	{
		return (0);
	}
	if (power == 0 && nb == 0)
	{
		return (1);
	}
	while (power >= 1)
	{
		num = num * nb;
		power--;
	}
	return (num);
}

/*int	main()
{
	int x = ft_iterative_power(5, 6);
	printf("%d", x);
	return 0;
}*/
