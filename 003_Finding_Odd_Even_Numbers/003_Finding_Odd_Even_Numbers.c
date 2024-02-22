
/*
@author: Veli Saçıkara
@date: 01.03.2023
@example name: Finding Odd Even Numbers
*/

#include <stdio.h>

int main()
{
	int num = 0;
	printf("****Finding Odd Even Numbers****\n");
	printf("Enter the number you want to find if odd or even: \n");
	scanf_s("%d", &num);


	/*
	Ternary operator ile de kontrol sağlanabilir.
	*/
	//int result = (num % 2 == 0) ? printf("Number is even\n") : printf("Number is odd\n");

	if (num % 2 == 0)
	{
		printf("Number is even\n");
	}
	else
	{
		printf("Number is odd\n");
	}
	return 0;
}
