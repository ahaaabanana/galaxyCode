/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tgrandpa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/02 12:30:17 by tgrandpa          #+#    #+#             */
/*   Updated: 2019/04/02 12:30:19 by tgrandpa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int			ft_iterative_factorial(int nb)
{
	int 	res;

	if (nb < 0)
		return (0);
	res = 1;
	while (nb > 0)
		res *= nb--;
	return (res);
}