# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: dcastro- <dcastro-@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/08/19 16:59:44 by dcastro-          #+#    #+#              #
#    Updated: 2017/08/19 17:56:21 by dcastro-         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = ft_ls

CC = gcc -Wall -Werror -Wextra -c

SRC = srcs/main.c srcs/ft_ls.c

INC = -I libft/inc/libft.h -I ft_printf/includes/ft_printf.h -I includes/ft_ls.h
