
#include <stdio.h>
#include <stdlib.h>

#define	SIZE	5

int main()
{
	srand(time(NULL));

	int a[SIZE];

	for (int i = 0; i < SIZE; ++i)
	{
		a[i] = rand() % 100;
	}

	for (int i = 0; i < SIZE; ++i)
	{
		printf("a[%d] = %d ", i, a[i]);
	}

	for (int i = 0; i < SIZE / 2; ++i)
	{
		int temp = a[SIZE - 1 - i];
		a[SIZE - 1 - i] = a[i];
		a[i] = temp;
	}

	printf("\n\n");

	for (int i = 0; i < SIZE; ++i)
	{
		printf("a[%d] = %d ", i, a[i]);
	}

	return 0;
}