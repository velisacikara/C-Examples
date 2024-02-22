
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define	SIZE	5

int main()
{
	srand((unsigned int)time(NULL));

	int a[SIZE], k;
	int count = 0;

	for (int i = 0; i < SIZE; ++i)
	{
		a[i] = rand() % 20;
	}

	for (int i = 0; i < SIZE; ++i)
	{
		printf("a[%d] = %d ", i, a[i]);
	}
	printf("\n\n");


	printf("Enter a number to find its multiple: ");
	scanf_s("%d", &k);

	for (int i = 0 ; i < SIZE; ++i)
	{
		if (a[i] % k == 0)
			count++;
	}
	printf("there is %d number of %d's multiple\n\n", count, k);


	printf("\n\n");





	return 0;

}