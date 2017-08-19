/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_uitoa.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcastro- <dcastro-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/27 14:30:29 by dcastro-          #+#    #+#             */
/*   Updated: 2017/08/02 19:27:14 by dcastro-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

static unsigned int	num_len(unsigned int nbr)
{
	unsigned int	i;

	i = 0;
	while ((nbr / 10) != 0)
	{
		i++;
		nbr /= 10;
	}
	i++;
	return (i);
}

char				*ft_uitoa(unsigned int n)
{
	char			*str;
	unsigned int	i;

	i = num_len(n) - 1;
	if (!(str = (char *)malloc(sizeof(char) * (num_len(n) + 1))))
		return (NULL);
	str[i + 1] = '\0';
	while (n > 9)
	{
		str[i] = (n % 10) + '0';
		i--;
		n /= 10;
	}
	if (n <= 9)
		str[i] = n + '0';
	return (str);
}
