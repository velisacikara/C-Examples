
#include <stdio.h>
#include <stdlib.h>


#define	SIZE	5


int main()
{


	srand((unsigned int)time(NULL));

	int a[SIZE];

	for (int i = 0; i < SIZE; ++i)
	{
		a[i] = rand() % 40;
	}

	int max = a[0];
	int min = a[0];


	for (int i = 0; i < SIZE; ++i)
	{
		printf("a[%d] = %d	", i, a[i]);
	}

	for (int i = 1; i < SIZE; ++i)
	{
		if (max < a[i])
			max = a[i];
		if (min > a[i])
			min = a[i];
	}

	printf("\nmax = %d\nmin = %d\n", max, min);




	return 0;
}