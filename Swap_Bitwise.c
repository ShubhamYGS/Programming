#include<stdio.h>

int main()
{
    int x = 6, y = 4;
    x = x^y;
    y = x^y;
    x = x^y;
    printf("x = %d and y = %d", x, y);
    return 0;
}

/*Output:
x = 4 y = 6
*/

