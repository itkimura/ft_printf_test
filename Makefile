# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: itkimura <itkimura@student.hive.fi>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/03/09 14:48:02 by itkimura          #+#    #+#              #
#    Updated: 2022/03/09 21:55:55 by itkimura         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

all: printf ft_printf

test:
	bash ./test.sh

printf:
	gcc main.c -D TEST -o printf

ft_printf: 
	gcc main.c -L../ft_printf/  -lftprintf -D FT_PRINTF -o ft_printf

clean:
	rm printf ft_printf

re: clean
	all