// EX00 ---------------------------------------
#include<stdio.h>

void	ft_ft(int *nbr);

int	main(void)
{
	int	num;
	int	*nbr;

	num = 100;
	nbr = &num; // holding the address of num
	printf("%d\n", num); // 100 should be printed
	ft_ft(nbr); // pass address of num to ft_ft
	printf("%d\n", num); // 42 should be printed
	return (0);
}
// EX01 ----------------------------------------
#include<stdio.h>

void	ft_ultimate_ft(int *********nbr);

int	main(void)
{
	int num;
	int *pnum;
	int **pnum2;
	int ***pnum3;
	int ****pnum4;
	int *****pnum5;
	int ******pnum6;
	int *******pnum7;
	int ********pnum8;
	int *********pnum9;

	num = 100;
	pnum = &num;
	pnum2 = &pnum;
	pnum3 = &pnum2;
	pnum4 = &pnum3;
	pnum5 = &pnum4;
	pnum6 = &pnum5;
	pnum7 = &pnum6;
	pnum8 = &pnum7;
	pnum9 = &pnum8;

	printf("%d\n", num); // 100 is printed out
	ft_ultimate_ft(pnum9); // pass 9th pointer to ft_ultimate_ft
	printf("%d\n", num); // 42 should be printed out
	return (0);
}

//Ex02 ------------------------------------------------------------
#include <stdio.h>

void	ft_swap(int *a, int *b);

int	main(void)
{
	int	num1;
	int	num2;
	int	*pnum1;
	int	*pnum2;

	num1 = 5;
	num2 = 10;
	pnum1 = &num1;
	pnum2 = &num2;
	ft_swap(pnum1, pnum2);
	printf("%d\n", *pnum1);
	printf("%d\n", *pnum2);
	return (0);
}

//Ex03 --------------------------------------------------------------
#include <stdio.h>

void	ft_div_mod(int a, int b, int *div, int *mod);

int	main(void)
{
	int	a;
	int	b;
	int	*div;
	int	*mod;

	a = 185;
	b = 10;
	div = &a;
	mod = &b;

	printf("Value of a is: %d\n", a);
	printf("Value of b is: %d\n", b);

	ft_div_mod(a, b, div, mod);
	printf("Value of a/b is: %d\n", *div);
	printf("Remainder of a/b is: %d\n", *mod);
	return (0);
}

//Ex04 -----------------------------------------------------------------
#include <stdio.h>

void	ft_ultimate_div_mod(int *a, int *b);

int	main(void)
{
	int	num1;
	int	num2;
	int *a;
	int *b;

	num1 = 185;
	num2 = 10;

	a = &num1;
	b = &num2;

	ft_ultimate_div_mod(a, b);
	printf("Division of a/b: %d\n", *a);
	printf("Remainder of a/b: %d\n", *b);
	return (0);
}

//Ex05 ------------------------------------------------------------------
#include <stdio.h>

void	ft_putstr(char *str);

int	main(void)
{
	char str[] = "This is my string\n";
	char *dest = str;
	
	ft_putstr(dest);
	return (0);
}

//Ex06 ------------------------------------------------------------------
#include <stdio.h>

int	ft_strlen(char *str);

int	main(void)
{
	char str[] = "Count me";
	char *dest = str;

	int count = ft_strlen(dest);
	printf("This is the count: %d", count);
	return (0);
}


//Ex07 ------------------------------------------------------------------
#include <stdio.h>

void	ft_rev_int_tab(int *tab, int size);

int	main(void)
{
	int size;

	int numbers[5] = {1, 2, 3, 4, 5};
	int *num = numbers;
	size = 5;
	
	printf("these are the original arrays: %d, %d, %d, %d, %d\n", numbers[0], numbers[1], numbers[2], numbers[3], numbers[4]);
	ft_rev_int_tab(num, size);
	printf("these are the new number: %d, %d, %d, %d, %d\n", numbers[0], numbers[1], numbers[2], numbers[3], numbers[4]);  
	return (0);
}

// Ex08 -----------------------------------------------------------------
#include <stdio.h>

void	ft_sort_int_tab(int *tab, int size);

int	main(void)
{
	int size;

	int numbers[5] = {1, 7, 3, 9, 6};
	int *num = numbers;
	size = 5;

	printf("these are the original arrays: %d, %d, %d, %d, %d\n", numbers[0], numbers[1], numbers[2], numbers[3], numbers[4]);
	ft_sort_int_tab(num, size);
	printf("these are the new number: %d, %d, %d, %d, %d\n", numbers[0], numbers[1], numbers[2], numbers[3], numbers[4]);
	return (0);
}
