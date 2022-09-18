/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asaadeld <asaadeld@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/21 16:37:14 by asaadeld          #+#    #+#             */
/*   Updated: 2022/08/22 01:58:08 by asaadeld         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
#include <stdio.h>
*/

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	if (b != 0)
	{
		*div = a / b;
		*mod = a % b;
	}
}

/*
int	main(void)
{
	int a;
	int b;
	int div;
	int mod;

	a = 5;
	b = 2;

	ft_div_mod(a, b, &div, &mod);
	printf("This is div: %d\n", div);
	printf("This is mod: %d", mod);
	return (0);
}
*/
