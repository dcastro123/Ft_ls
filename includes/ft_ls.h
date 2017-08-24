/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ls.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcastro- <dcastro-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/14 20:59:18 by dcastro-          #+#    #+#             */
/*   Updated: 2017/08/24 16:43:34 by dcastro-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_LS_H
# define FT_LS_H

#include <stdio.h>
#include "libft.h"
#include "ft_printf.h"
#include <dirent.h>
#include <unistd.h>
#include <stdlib.h>
#include <time.h>
#include <sys/stat.h>
#include <pwd.h>
#include <uuid/uuid.h>
#include <sys/types.h>
#include <grp.h>
#include <sys/xattr.h>

typedef	struct dirent t_stat;
typedef	struct stat   t_dr;

typedef struct 		s_data
{
	char	flag;
	char	*name;
	struct s_env	*next;
	int			len;
	t_stat	stat;


}					t_data;


#endif