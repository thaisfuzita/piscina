/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjulya-c <tjulya-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/27 18:19:00 by tjulya-c          #+#    #+#             */
/*   Updated: 2026/01/27 19:40:42 by tjulya-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_alpha(char str)
{
	if (!((str >= 'a' && str <= 'z')
			|| (str >= 'A' && str <= 'Z')))
			return (0);
	return (1);
}

int	ft_str_is_numeric(char str)
{
	if (str < '0' || str > '9')
		return (0);
	return (1);
}

char	*ft_strlowcase(char *str)
{
	int	count;

	count = 0;
	while (str[count] != '\0')
	{
		if (str[count] >= 'A' && str[count] <= 'Z')
		{
			str[count] = str[count] + 32;
		}
		count++;
	}
	return (str);
}

char	*ft_strcapitalize(char *str)
{
	int	i;
	
	i = 1;
	if (str[0] == '\0')
		return (str);
	ft_strlowcase(str);
	if (ft_str_is_alpha(str[0]) == 1)
		str[0] = str[0] - 32;
	while (str[i] != '\0')
	{
		if ((ft_str_is_alpha(str[i]) == 1) && (ft_str_is_alpha(str[i - 1]) == 0) 
			&& (ft_str_is_numeric(str[i - 1]) == 0))
		{
			str[i] = str[i] - 32;
		}
		i++;
	}
	return (str);
}	

/*int main()
{
	printf("%s", ft_strcapitalize("hi, how are you? 42words forty-two; fifty+and+one"));
	return 0;
}*/
