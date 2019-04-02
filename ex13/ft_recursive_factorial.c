/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tgrandpa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/02 12:39:13 by tgrandpa          #+#    #+#             */
/*   Updated: 2019/04/02 12:39:15 by tgrandpa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int			ft_recursive_factorial(int nb)
{
	if (nb == 0)
		return (1);
	else if (nb > 0)
		return nb * ft_recursive_factorial(nb - 1);
	else
		return (0);
}