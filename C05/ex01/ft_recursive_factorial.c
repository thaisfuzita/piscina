/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjulya-c <tjulya-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/22 18:23:41 by tjulya-c          #+#    #+#             */
/*   Updated: 2026/02/03 17:34:37 by tjulya-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <stdio.h>*/

int	ft_recursive_factorial(int nb)
{
	int	num;

	num = 1;
	if (nb < 0)
	{
		return (0);
	}
	if (nb == 0)
	{
		return (1);
	}
	if (nb > 1)
	{
		num = ft_recursive_factorial(nb - 1);
	}	
	num = num * nb;
	return (num);
}

/*int	main()
{
	int x = ft_recursive_factorial(5);
	printf("%d", x);
	return 0;
}*/
