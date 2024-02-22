
#include <stdio.h>

/*
* �ki de�i�kenin yerleri de�i�tirilir.
* Bu i�lem s�ras�nda ���nc� bir i�lem kullan�lmaz.
* Bu i�lem s�ras�nda herhangi bir aritmetik operat�r kullan�lmaz.
* 
*/
void swap(int *x, int *y)
{
    *x = *x ^ *y;
    *y = *x ^ *y;
    *x = *x ^ *y;
}

int main()
{
    int x = 10;
    int y = 5;

    printf("x = %d  y = %d\n", x, y);
    swap(&x, &y);
    printf("x = %d   y = %d\n", x, y);

    
}

