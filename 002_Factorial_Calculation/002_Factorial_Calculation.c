
/*
@author: Veli Saçýkara
@date: 01.03.2023
@example name: Factorial Calculation
*/

#include <stdio.h>

int find_factorial(int a)
{
	int result = 1;

	for (int i = 1; i <= a; i++)
	{
		result *= i;
	}
	return result;
}

int main()
{
	int num;
	printf("****Factorial Calculation****\n");
	printf("Enter a number to find its factorial: \n");
	scanf_s("%d", &num);
	printf("%d! = %d\n", num, find_factorial(num));

	return 0;
}