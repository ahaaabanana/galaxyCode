/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tgrandpa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/02 14:48:18 by tgrandpa          #+#    #+#             */
/*   Updated: 2019/04/02 14:48:20 by tgrandpa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <string.h>

void 	ft_putchar(char c)
{
	write(1, &c, 1);
}

int			ft_strcmp(char *s1, char *s2)
{
	int		i;

	i = 0;
	while (s1[i] != '\0')
	{
		if (s1[i] < s2[i])
			return (-1);
		else if (s1[i] > s2[i])
			return (1);
		else
			i++;
	}
	return (0);
}

void	swap(char *str1, char *str2)
{
	printf("spap = %p %p\n", str1, str2);
	char *temp = str1;
	str1 = str2;
	str2 = temp;
	printf("spap = %p %p\n", str1, str2);
}

int		main(int argc, char **argv)
{
	int	i;
	int j;
	int min;
	char *temp;

	i = 1;
	min = 1;
	while (i < 2)
	{
		j = 1;
		while (j < argc)
		{
			if (ft_strcmp(argv[min], argv[j]) == 1)
				min = j;
			j++;
		}
		temp = argv[i];
		argv[i] = argv[min];
		argv[min] = temp;
		i++;
	}
	i = 1;
	while (i < argc)
		printf("%s\n", argv[i++]);
	return (0);
}



