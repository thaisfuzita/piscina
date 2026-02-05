/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjulya-c <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/27 17:28:24 by tjulya-c          #+#    #+#             */
/*   Updated: 2026/01/27 17:53:50 by tjulya-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <stdio.h>*/

void	ft_rev_int_tab(int *tab, int size)
{
	int	i;
	int	j;
	int	temp;

	i = 0;
	j = size - 1;
	while (i < size / 2)
	{
		temp = tab[i];
		tab[i] = tab[j - i];
		tab[j - i] = temp;
		i++;
	}
}

/*int main()
{
	int i = 0;
	int array[] = {1, 2, 3, 4, 5};
	ft_rev_int_tab(array, 5);
	while (i < 5)
	{
		printf("%d", array[i]);
		i++;
	}
}*/
