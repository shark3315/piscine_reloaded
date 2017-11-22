/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lapain <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/13 16:20:29 by lapain            #+#    #+#             */
/*   Updated: 2017/11/13 16:21:27 by lapain           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_iterative_factorial(int nb)
{
	int cmpt;
	int res;

	cmpt = 1;
	res = 1;
	if (nb > 0 && nb <= 12)
	{
		while (cmpt <= nb)
		{
			res *= cmpt;
			cmpt++;
		}
		return (res);
	}
	if (nb == 0)
		return (1);
	else
		return (0);
}
