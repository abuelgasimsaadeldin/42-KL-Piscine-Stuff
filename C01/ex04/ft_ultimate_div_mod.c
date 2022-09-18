/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asaadeld <asaadeld@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/21 20:31:08 by asaadeld          #+#    #+#             */
/*   Updated: 2022/08/21 20:31:25 by asaadeld         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
#include <stdio.h>
*/

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	div;
	int	mod;

	div = *a / *b;
	mod = *a % *b;
	*a = div;
	*b = mod;
}

/*
int	main(void)
{
	int num1;
	int	num2;
	int *a;
	int *b;

	num1 =5;
	num2 = 2;
	a = &num1;
	b = &num2;

	printf("This is num1: %d\n", num1);
	printf("This is num2: %d\n", num2);
	ft_ultimate_div_mod(a, b);
	printf("This is num1 now: %d\n", num1);
	printf("This is num2 now: %d\n", num2);
	return (0);
}
*/
