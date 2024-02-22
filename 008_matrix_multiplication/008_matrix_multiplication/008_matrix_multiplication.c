
#include <stdio.h>

#define MAX_ROW	10
#define MAX_COL	10



int main()
{
	int row1, col1;
	int row2, col2;

	printf("Enter 1. row:");
	scanf_s("%d", &row1);
	printf("Enter 1. column:");
	scanf_s("%d", &col1);
	printf("Enter 2. row:");
	scanf_s("%d", &row2);
	printf("Enter 2. column:");
	scanf_s("%d", &col2);

	if (row2 != col1) {
		printf("\nMultiplication Error!\n\n");
		return 0;
	}

	int matrix1[MAX_ROW][MAX_COL] = { 0 };
	int matrix2[MAX_ROW][MAX_COL] = { 0 };
	int matrix3[MAX_ROW][MAX_COL] = { 0 };

	printf("\n\n");

	// 1. matrix
	for (int i = 0; i < row1; ++i)
	{
		for (int j = 0; j < col1; ++j)
		{
			printf("matrix1[%d][%d]:", i, j);
			scanf_s("%d", &matrix1[i][j]);
		}
	}

	printf("\n 1. Matrix\n");

	for (int i = 0; i < row1; ++i)
	{
		for (int j = 0; j < col1; ++j)
			printf(" %d", matrix1[i][j]);
		printf("\n");
	}

	printf("\n\n");

	// 2. matrix
	for (int i = 0; i < row2; ++i)
	{
		for (int j = 0; j < col2; ++j)
		{
			printf("matrix2[%d][%d]:", i, j);
			scanf_s("%d", &matrix2[i][j]);
		}
	}

	printf("\n 2. Matrix\n");

	for (int i = 0; i < row2; ++i)
	{
		for (int j = 0; j < col2; ++j)
			printf(" %d", matrix2[i][j]);
		printf("\n");
	}

	// multiplication
	for (int i = 0; i < row1; ++i)
	{
		for (int j = 0; j < col2; ++j)
		{
			int temp = 0;
			for (int k = 0; k < col1; ++k)
				temp += matrix1[i][k] * matrix2[k][j];
			matrix3[i][j] = temp;
		}

	}

	printf("\n\n 3. Matrix\n");

	// 3. matrix
	for (int i = 0; i < row1; ++i)
	{
		for (int j = 0; j < col2; ++j)
			printf(" %d", matrix3[i][j]);
		printf("\n");
	}

	return 0;
}