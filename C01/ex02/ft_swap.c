/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asaadeld <asaadeld@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/21 16:10:23 by asaadeld          #+#    #+#             */
/*   Updated: 2022/08/21 16:10:43 by asaadeld         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
#include <stdio.h>
*/

void	ft_swap(int *a, int *b)
{
	int	temp;

	temp = *a;
	*a = *b;
	*b = temp;
}

/*
int	main(void)
{
	int num1;
	int num2;
	int *a;
	int *b;

	num1 = 1;
	num2 = 2;
	a = &num1;
	b = &num2;

	printf("This is num1: %d\n", num1);
	ft_swap(a, b);
	printf("This is num1 now: %d", num1);
}
*/
