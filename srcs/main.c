/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcastro- <dcastro-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/19 16:46:16 by dcastro-          #+#    #+#             */
/*   Updated: 2017/08/24 16:43:46 by dcastro-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_ls.h"

static	void	ft_usage_error(char *av)
{
	ft_printf("ls: illegal option -%s\n", av);
	ft_printf("usage: ls [-alrtR] [file ...]");
}

static	void	init_env(t_data *e)
{
	flag = 0;
	name = NULL;
}

static	int		get_usage(char c, t_data *e)
{
	int		i;
	char	tab[6];

	tab = ft_strdup("alrtR");
	i = -1;
	while (tab[++i])
	{
		if (tab[i] == c)
			e->flag == c;
	}
	return (e->flag != NULL ? 1 : 0);
}

int	main(int ac, char **av)
{
	t_data e;
	int	i;

	init_env(&e);
	if (ac > 1)
	{
		if (!(get_usage(av[1][1], &e)))
			return (ft_usage_error(av[1]));
		i = 2;
		while (av[++i])
			get_dir(av[i], &e);

	}
	else
		if (!(get_dir(".", &e)))
			return (NULL);
	ft_ls(&e);
	print_ls(&e);
	return (0);
}
