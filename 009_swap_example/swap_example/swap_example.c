
#include <stdio.h>

/*
* Ýki deðiþkenin yerleri deðiþtirilir.
* Bu iþlem sýrasýnda üçüncü bir iþlem kullanýlmaz.
* Bu iþlem sýrasýnda herhangi bir aritmetik operatör kullanýlmaz.
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

