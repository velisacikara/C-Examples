
/*
@author: Veli Saçýkara
@date: 01.03.2023
@example name: Creating a square root function
*/

#include<stdio.h>
#include<math.h>

void MySqrt(int a)
{
	int flag = 0;

	for (int i = 1; i < (a / 2); i++)
	{
		if (i * i == a)
		{
			printf("%d-->%d\n", a, i);
			flag = 1;
			break;
		}
	}
	if (flag != 1)
	{
		printf("This number is not a square of any integer number!\n");
	}
}

int main()
{
	int num = 0;
	printf("****My SquareRoot Function****\n");
	printf("Enter a number to find its squareroot: ");
	scanf_s("%d", &num);
	MySqrt(num);



	return 0;

}