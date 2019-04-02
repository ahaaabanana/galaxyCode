/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tgrandpa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/02 14:11:15 by tgrandpa          #+#    #+#             */
/*   Updated: 2019/04/02 14:11:17 by tgrandpa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void 	ft_putchar(char c)
{
	write(1, &c, 1);
}

int		main(int argc, char **argv)
{
	int	i;
	int j;

	i = 1;
	while (i < argc)
	{
		j = 0;
		while (argv[i][j] != '\0')
			ft_putchar(*(argv[i] + j++));
		ft_putchar('\n');
		i++;
	}
	return (0);
}