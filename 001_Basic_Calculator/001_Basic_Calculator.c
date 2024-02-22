
/*
@author: Veli Saçýkara
@date: 01.03.2023
@example name: Basic Calculator
*/

#include <stdio.h>

int main()
{
	int first_num, second_num, action;
	printf("****Basic Calculator****\n");
	printf("Please enter two numbers:\n");
	scanf_s("%d%d", &first_num, &second_num);

	printf("Please choose which action to take:\nAddition-->1\nSubtraction-->2\nMultiplication-->3\nDivision-->4\n\n");
	scanf_s("%d", &action);

	switch (action)
	{
	case 1:
		printf("%d + %d = %d\n", first_num, second_num, first_num + second_num);
		break;
	case 2:
		printf("%d - %d = %d\n", first_num, second_num, first_num - second_num);
		break;
	case 3:
		printf("%d * %d = %d\n", first_num, second_num, first_num * second_num);
		break;
	case 4:
		printf("%d / %d = %.2f\n", first_num, second_num, (double)first_num / second_num); // Type casting iþlemi yapýldý.
		break;
	default:
		printf("Invalid enrty!");
	}
	return 0;
}

